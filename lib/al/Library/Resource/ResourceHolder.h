#pragma once

#include <prim/seadSafeString.h>

// this probably isnt a good spot
namespace al {

class Resource;
class SeadAudioPlayer;
class ActorResourceHolder;
class ActorResource;

void addResourceCategory(const sead::SafeString&, int, sead::Heap*);
bool isEmptyCategoryResource(const sead::SafeString&);
void createCategoryResourceAll(const sead::SafeString&);
void removeResourceCategory(const sead::SafeString&);
const char* getResourceName(const Resource*);
const char* getResourcePath(const Resource*);
bool isExistResGraphicsFile(const Resource*);
Resource* findResource(const sead::SafeString&);
Resource* findOrCreateResource(const sead::SafeString& path, const char* ext);
Resource* findOrCreateResourceCategory(const sead::SafeString& path,
                                       const sead::SafeString& category, const char* ext);
Resource* findOrCreateResourceEventData(const char*, const char*);
Resource* findOrCreateResourceSystemData(const char*, const char*);
ActorResource* findOrCreateActorResource(ActorResourceHolder*, const char*, const char*);
void findOrCreateActorResourceWithAnimResource(ActorResourceHolder*, const char*, const char*,
                                               const char*, bool);
void isExistResourceYaml(const Resource*, const char*, const char*);
void isExistResourceYaml(const ActorResource*, const char*, const char*);
void findResourceYaml(const Resource*, const char*, const char*);
void findResourceYaml(const ActorResource*, const char*, const char*);
void tryFindStageParameterFileDesign(const sead::SafeString&, const sead::SafeString&, int);
void loadCategoryArchiveAll(const sead::SafeString&);
void setCurrentCategoryName(const char*);
void resetCurrentCategoryName();
void setCurrentCategoryNameDefault();
bool getBymlFromObjectResource(const sead::SafeString&, const sead::SafeString&);
bool tryGetBymlFromObjectResource(const sead::SafeString&, const sead::SafeString&);
bool getBymlFromLayoutResource(const sead::SafeString&, const sead::SafeString&);
bool tryGetBymlFromLayoutResource(const sead::SafeString&, const sead::SafeString&);
u8* tryGetBymlFromArcName(const sead::SafeString&, const sead::SafeString&);
u8* getBymlFromArcName(const sead::SafeString&, const sead::SafeString&);
u8* getByml(const Resource*, const sead::SafeString&);
u8* tryGetByml(const Resource*, const sead::SafeString&);
bool setAudioPlayerToResourceSystem(SeadAudioPlayer*, SeadAudioPlayer*);

}  // namespace al
