#include <iostream>
using namespace std;

struct Node
{
    string song;
    Node* prev;
    Node* next;
    Node(string s) : song(s), prev(NULL), next(NULL) {}
};

void insertFront(Node*& head, string song)
{
    Node* newNode = new Node(song);
    if (!head)
    {
        head = newNode; return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertEnd(Node*& head, string song)
{
    Node* newNode = new Node(song);
    if (!head)
    {
        head = newNode; return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAfterSong(Node*& head, string target, string song)
{
    Node* temp = head;
    while (temp && temp->song != target) temp = temp->next;
    if (!temp)
    {
        cout << "Song " << target << " not found, insertion skipped.\n";
        return;
    }
    Node* newNode = new Node(song);
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next) temp->next->prev = newNode;
    temp->next = newNode;
}

void removeFirst(Node*& head)
{
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) head->prev = NULL;
    delete temp;
}

int countSongs(Node* head)
{
    int count = 0;
    while (head)
    {
        count++; head = head->next;
    }
    return count;
}

void display(Node* head)
{
    while (head)
    {
        cout << head->song << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* playlist = NULL;
    cout << "Doubly Linked Music Playlist\n";

    insertEnd(playlist, "SongX");
    insertEnd(playlist, "SongY");
    insertFront(playlist, "SongA");
    cout << "Playlist after insertions: ";
    display(playlist);

    insertAfterSong(playlist, "SongX", "SongD");
    cout << "After inserting SongD after SongX: ";
    display(playlist);

    removeFirst(playlist);
    cout << "After removing first song: ";
    display(playlist);

    cout << "Total songs in playlist: " << countSongs(playlist) << endl;

}
