#pragma once

#include <iostream>
#include <string>

struct Document{
    Document() = default;
    
    Document(int document_id, double document_relevance, int document_rating):
        id(document_id), relevance(document_relevance), rating(document_rating){}
    
    int id = 0;
    double relevance = 0.0;
    int rating = 0;
};
std::ostream& operator<<(std::ostream& out, const Document& document);
void PrintDocument(const Document& document);

enum class DocumentStatus {
    ACTUAL,
    IRRELEVANT,
    BANNED,
    REMOVED,
};