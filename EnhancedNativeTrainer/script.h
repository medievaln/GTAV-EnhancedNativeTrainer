/*
Some of this code began its life as a part of GTA V SCRIPT HOOK SDK.
http://dev-c.com
(C) Alexander Blade 2015

It is now part of the Enhanced Native Trainer project.
https://github.com/gtav-ent/GTAV-EnhancedNativeTrainer
(C) Rob Pridham and fellow contributors 2015
*/

#pragma once

#include "inc\natives.h"
#include "inc\types.h"
#include "inc\enums.h"

#include "inc\main.h"

#include "database.h"

#include <fstream>

void ScriptMain();

void ScriptTidyUp();

bool process_skinchanger_menu();

bool process_skinchanger_detail_menu();

void update_features();

void set_all_nearby_peds_to_calm(Ped playerPed, int count);

std::vector<FeatureEnabledLocalDefinition> get_feature_enablements();

/*
int getFrozenWantedLvl();
void setFrozenWantedLvl(int level);
void setFrozenWantedFeature(bool b);
*/

void turn_off_never_wanted();