#include <iostream>
#include "list.h"
#include "catch2/catch_test_macros.hpp"
#include "catch2/catch_session.hpp"

TEST_CASE("EMPTY","[empty]"){
    
    List list;
    CHECK(list.Empty());
}
TEST_CASE("SIZE","[size]"){
    List list;
    list.PushFront(1);
    list.PushFront(3);
    list.PushBack(5);
    int popped = list.PopFront();
    CHECK(popped==3);
    CHECK(list.Size()==2);
}
TEST_CASE("CLEAR","[clear_f_1]"){
    List list;
    list.PushFront(1);
    list.PushFront(3);
    list.PushBack(5);
    list.Clear();
    CHECK(!list.Size());
    CHECK(list.Empty());
}

int main(){
    return Catch::Session().run();
}
