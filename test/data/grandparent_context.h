auto data = mstch::object{
  {"grand_parent_id", std::string{"grand_parent1"}},
  {"parent_contexts", mstch::array{
    mstch::object{
      {"parent_id", std::string{"parent1"}},
      {"child_contexts", mstch::array{
        mstch::object{{"child_id", std::string{"parent1-child1"}}},
        mstch::object{{"child_id", std::string{"parent1-child2"}}}
      }}
    },
    mstch::object{
      {"parent_id", std::string{"parent2"}},
      {"child_contexts", mstch::array{
        mstch::object{{"child_id", std::string{"parent2-child1"}}},
        mstch::object{{"child_id", std::string{"parent2-child2"}}}
      }}
    }
  }}
};
