#include "browser.h"



#include <string>
//#include <HtmlParser.h>
// HtmlParser.h

// HtmlViewer.h

class HtmlParser;

class HtmlViewer {
 public:
     HtmlViewer();

     void start();
private:
     HtmlPareser* m_parser;
     DomTree* m_tree;
     RenderTree* m_render_tree;
};



// HtmlViewer.cpp
HtmlViewer::HtmlViewer() {
      HtmlParser m_parser = new HtmlParser(buffer);
      parser->ParseStart();
      DomTree* tree = parser->ParseEnd();
      DomTreePrinter printer = new DomTreePrinter(tree);
      printer->doPrint();

}

HtmlViewer::~HtmlViewer() {
}


include <string>
class HtmlParser {
  public:
      HtmlParser(const std::string& buffer) ;
      ~HtmlParser() {}

      void ParseStart();
      DomTree* ParseEnd();
  private:          
      std::string m_buffer;
};


// HtmlParser.cpp
HtmlParser::start() {

    switch (m_buffer[m_curr_index]) {
       case '<':
           tagStart()
         break;
       case '>'
           tagEnd();

    }

}

class Element : public Node {

private:
    std::string name;
    std::vector<Attribute>

};

class Document : public Node {
};

class ImgElement : public Element {
  m_src;

};

class H2 : public Element {
}

class Text : public Node {
  m_text = "Html Image"
}


class Attribute {
  private:
      std::string name;
      std::string value;
};

class Node {
    Node* m_first_child;
    Node* m_last_child;
    Node* m_next_sibling;
    Node* m_prev_sibling;
    vector<Node> childs;
}

AppendNode();
Document->m_last_child->next_sibling = new_node;
Document->m_last_child = new_node;

RemoveNode();
target_last_child = Document->m_last_child;
Document->m_last_child = Document->m_last_child->prev_sibling 
delete target_last_child;

std::map<std::string, function> constructor_map = 
{ "img", createImageElement},
{ "body", createlemen    

constructor_map[img].function

HtmlParser::tagStart() {
 
   Element* aaa = m_root->createElement("img");
   Element* aaa = new HtmlImgElement;
   std::string name = "src"
   std::string value = "pic_trulli.jpg"
   Attribute* bb = new Attribute(name, value);

}




HtmlParser::tagEnd() {
   Document.append(aaa);
}



int main() {
    std::string buffer =  openFile("example.js", "r");
    HtmlViewer* viewer = new HtmlViewer();
    viewer->start(buffer);
    HtmlParser parser = new HtmlParser(buffer);
    parser->ParseStart();
    DomTree* tree = parser->ParseEnd();
    DomTreePrinter printer = new DomTreePrinter(tree);
    printer->doPrint();
}
