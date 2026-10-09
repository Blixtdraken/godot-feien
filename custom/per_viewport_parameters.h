#pragma once
#include "core/string/string_name.h"
#include "core/templates/rid.h"
#include "core/variant/variant.h"

#include <map>
#include <vector>


//Maybe should make it more specialised as in making it per viewport clipping. Instado generalising it 

struct ViewportParameterEntry{
	RID viewport;
	StringName parameter;
	Variant value;
};

class PerViewportParameterSystem {
	public:
	std::map<RID, ViewportParameterEntry> viewport_parameters;

	void apply_viewport_parameters(const RID& viewport);

	void initialize_viewport_parameters();
};
