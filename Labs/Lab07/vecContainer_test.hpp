#ifndef __VEC_TEST__
#define __VEC_TEST__

#include "gtest/gtest.h"
#include "VectorContainer.hpp"
#include "selectionSort.hpp"
#include "bubblesort.hpp"
#include "floor.hpp"
#include "paren.hpp"
#include "Ceil.hpp"
#include "absolute.hpp"

TEST(VectorContainerTestSet, SizeTest) {
    Op* seven = new Op(7);
	Op* eight = new Op(8);
	Op* four = new Op(4);
	Op* two = new Op(2);
	Op* nine = new Op(9);
    VectorContainer* test_container = new VectorContainer();

    test_container->add_element(seven);
	test_container->add_element(eight);
	test_container->add_element(four);
	test_container->add_element(two);
	test_container->add_element(nine);
	

    ASSERT_EQ(test_container->size(), 5);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(VectorContainerTestSet, SwapTest) {
    Op* seven = new Op(7);
	Op* four = new Op(4);
	Op* nine = new Op(9);
    VectorContainer* test_container = new VectorContainer();

    test_container->add_element(seven);
	test_container->add_element(four);
	test_container->add_element(nine);
	test_container->swap(0, 1);

	ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 4);
	EXPECT_EQ(test_container->at(1)->evaluate(), 7);
}

TEST(VectorContainerTestSet, SelectionSortTest) {
    Op* seven = new Op(7);
	Op* four = new Op(4);
	Op* nine = new Op(9);
    VectorContainer* test_container = new VectorContainer();

    test_container->add_element(seven);
	test_container->add_element(four);
	test_container->add_element(nine);
	test_container->set_sort_function(new SelectionSort());
	test_container->sort();

	ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 4);
	EXPECT_EQ(test_container->at(1)->evaluate(), 7);
	EXPECT_EQ(test_container->at(2)->evaluate(), 9);
}


TEST(SortTestSet, SelectionSortTest) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* tempMult = new Mult(seven, four);
	Floor* TreeA = new Floor(tempMult);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* tempADD = new Add(three, two);
	Ceil* TreeB = new Ceil(tempADD);
	

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}
TEST(VectorContainerTestSet, LongerSelectionSortTest_ADD_SUB_MULT) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Add* TreeA = new Add(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Sub* TreeB = new Sub(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Mult* TreeC = new Mult(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 11);
    EXPECT_EQ(container->at(1)->evaluate(), 1);
    EXPECT_EQ(container->at(2)->evaluate(), 60);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 1);
    EXPECT_EQ(container->at(1)->evaluate(), 11);
    EXPECT_EQ(container->at(2)->evaluate(), 60);
}
TEST(VectorContainerTestSet, BubbleTest) {
    Op* seven = new Op(7);
	Op* four = new Op(4);
	Op* nine = new Op(9);
    VectorContainer* test_container = new VectorContainer();

    test_container->add_element(seven);
	test_container->add_element(four);
	test_container->add_element(nine);
	test_container->set_sort_function(new BubbleSort());
	test_container->sort();

	ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 4);
	EXPECT_EQ(test_container->at(1)->evaluate(), 7);
	EXPECT_EQ(test_container->at(2)->evaluate(), 9);
}

TEST(VectorContainerTestSet, BubbleSort2) {
    Op* seven = new Op(7);
	Op* four = new Op(4);
	Op* nine = new Op(9);
	Op* three = new Op(3);
	Op* eight = new Op(8);	
    VectorContainer* test_container = new VectorContainer();

    test_container->add_element(seven);
	test_container->add_element(four);
	test_container->add_element(nine);
	test_container->add_element(three);
	test_container->add_element(eight);
	test_container->set_sort_function(new BubbleSort());
	test_container->sort();

	ASSERT_EQ(test_container->size(), 5);
	EXPECT_EQ(test_container->at(0)->evaluate(), 3);
	EXPECT_EQ(test_container->at(1)->evaluate(), 4);
	EXPECT_EQ(test_container->at(2)->evaluate(), 7);
	EXPECT_EQ(test_container->at(3)->evaluate(), 8);
	EXPECT_EQ(test_container->at(4)->evaluate(), 9);
}

TEST(VectorContainerTestSet, BubbleSortBig) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new BubbleSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(VectorContainerTestSet, BubbleSortBig2) {
    Op* seven = new Op(7);
    Op* nine = new Op(9);
    Mult* TreeA = new Mult(seven, nine);

    Op* four = new Op(4);
    Op* two = new Op(2);
    Add* TreeB = new Add(four, two);

    Op* ten = new Op(10);
    Op* one = new Op(1);
    Sub* TreeC = new Sub(ten, one);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 63);
    EXPECT_EQ(container->at(1)->evaluate(), 6);
    EXPECT_EQ(container->at(2)->evaluate(), 9);

    container->set_sort_function(new BubbleSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 6);
    EXPECT_EQ(container->at(1)->evaluate(), 9);
    EXPECT_EQ(container->at(2)->evaluate(), 63);
}


#endif