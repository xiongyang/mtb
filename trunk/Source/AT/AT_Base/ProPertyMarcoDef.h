#pragma once

#define ProPerty(TYPE,NAME) \
public:\
		   void Set##NAME(const TYPE & aVal) {m_##NAME = aVal;};\
		   TYPE& Get##NAME(){return m_##NAME;}\
		   private: TYPE m_##NAME

