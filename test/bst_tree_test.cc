#include "../header/bst_tree.h"
#include <gtest/gtest.h>
#include <iostream>
#include "../source/bst_tree.cc"
using namespace testing;
using namespace std;

// Fixture Class
class BinarySearchTreeTest : public Test {
 public:
  BinarySearchTreeTest();
  virtual ~BinarySearchTreeTest();
  void SetUp() override;
  void TearDown() override;

 protected:
  BinarySearchTree<int> bst_;  // BST obj member
};

/* Constructor */
BinarySearchTreeTest::BinarySearchTreeTest() {
  cout << "Constructor called\n";
}

/* Destructor */
BinarySearchTreeTest::~BinarySearchTreeTest() {
  cout << "Destructor called\n";
}

/* SetUp */
void BinarySearchTreeTest::SetUp() {
  bst_.insert(bst_.getRoot(), 1);
  cout << "SetUp called\n";
}

/* TearDown */
void BinarySearchTreeTest::TearDown() {
  cout << "TearDown called\n";
}

TEST_F(BinarySearchTreeTest, TestGetRoot) {
  EXPECT_EQ(2 * 4, 8);  // 테스트 체크용
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}