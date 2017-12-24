#include "Dumping.h"

void Dump::DumpClassIds()
{
	ClientClass* cClass = Interfaces::Client->GetAllClasses();
	while (cClass)
	{
		cClass = cClass->m_pNext;
	}
}
