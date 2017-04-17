#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}         , {}    , 1      , {}        , 0      },
// You must not link first flags to attacking side's XRAY base for A&D, otherwise game ends after first flag.
{ 1, TEAM_BLUE   , SPAWN_XRAY,    {2,3}        , {}    , 1      , {}        , 0    , "Jordan Main Base" },
{ 2, TEAM_RED    , SPAWN_NEVER,   {/*1-No!*/ 4}, {3} , 1     , {}        , 0    , "%1" },

{ 3, TEAM_RED    , SPAWN_NEVER,   {4}      , {2}    , 1      , {}        , 0    , "%1" },
{ 4, TEAM_RED    , SPAWN_NEVER,   {5,6,7}      , {}    , 1      , {}        , 0    , "Checkpoint" },
{ 5, TEAM_RED    , SPAWN_NEVER,   {8}      , {6,7}   , 1      , {}        , 0    , "%1" },
{ 6, TEAM_RED    , SPAWN_NEVER,   {8}      , {5,7}   , 1      , {}        , 0    , "%1" },
{ 7, TEAM_RED    , SPAWN_NEVER,   {8}      , {5,6}    , 1      , {}        , 0    , "%1" },
{ 8, TEAM_RED    , SPAWN_NEVER,   {9}      , {}    , 1      , {}        , 0    , "%1" },

{ 9, TEAM_RED    , SPAWN_XRAY,    {}       , {}    , 1      , {}        , 0    , "RU Main Base" },

{ 10, TEAM_BLUE    , SPAWN_INSTANT,   {}      , {}    , 1      , {1,2,3}        , 3    , "%1" },

{ 11, TEAM_RED    , SPAWN_INSTANT,   {}      , {}    , 1      , {-5,-6,-7,9}        , 4    , "%1" }

};
