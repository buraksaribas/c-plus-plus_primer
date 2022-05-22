#include <string>
#include <set>
#include <iostream>

class Message
{
    friend void swap(Message& lhs, Message& rhs);
    friend class Folder;
public:
    explicit Message(const std::string &str = "")
        : contents(str) { }
    Message(const Message& m)
        : contents(m.contents), folders(m.folders)
    {
        add_to_Folders(m);
    }
    Message& operator=(const Message& rhs)
    {
            remove_from_Folders();
            contents = rhs.contents;
            folders = rhs.folders;
            add_to_Folders(rhs);
            return *this;
    }
    ~Message()
    {
        remove_from_Folders();
    }
    void save(Folder& f)
    {
        addFldr(&f);
        f.addMsg(this);
    }
    void remove(Folder& f)
    {
        folders.erase(&f);
        f.remMsg(this);
    }
private:
    std::string contents;
    std::set<Folder*> folders;

    void add_to_Folders(const Message& m)
    {
        for(auto f : m.folders)
            f->addMsg(this);
    }
    void remove_from_Folders()
    {
        for(auto f : folders)
            f->remMsg(this);
        folders.clear();
    }

    void addFldr(Folder *f) { folders.insert(f); }
    void remFldr(Folder *f) { folders.erase(f); }
};

void swap(Message& lhs, Message& rhs)
{
    using std::swap;
    for(auto f : lhs.folders)
        f->remMsg(&lhs);
    for(auto f : rhs.folders)
        f->remMsg(&rhs);
    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);
    for(auto f : lhs.folders)
        f->addMsg(&lhs);
    for(auto f : rhs.folders)
        f->addMsg(&rhs);
}

class Folder
{
    friend void swap(Folder& lhs, Folder& rhs);
    friend class Message;
public:
    Folder() = default;
    Folder(const Folder& f)
        : msgs(f.msgs) 
    { 
        add_to_Message(f); 
    }
    Folder& operator=(const Folder& rhs)
    {
        remove_from_Message();
        msgs = rhs.msgs;
        add_to_Message(rhs);
        return *this;
    }
    ~Folder()
    {
        remove_from_Message(); 
    }

    void print_debug()
    {
        for (auto m : msgs)
        std::cout << m->contents << " ";
        std::cout << std::endl;
    }
private:
    std::set<Message*> msgs;

    void add_to_Message(const Folder& f)
    {
        for(auto m : f.msgs)
            m->addFldr(this);
    }
    void remove_from_Message()
    {
        for (auto m : msgs)
        m->remFldr(this);
    }

    void addMsg(Message *m) { msgs.insert(m); }
    void remMsg(Message *m) { msgs.erase(m); }
};

void swap(Folder& lhs, Folder& rhs)
{
    using std::swap;
    lhs.remove_from_Message();
    rhs.remove_from_Message();

    swap(lhs.msgs, rhs.msgs);
    
    lhs.add_to_Message(lhs);
    rhs.add_to_Message(rhs);
}
