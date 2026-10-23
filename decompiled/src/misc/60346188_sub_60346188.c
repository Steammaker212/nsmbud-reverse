/* sub_60346188
 * address: 0x60346188   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60346188(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  char v4; // r12
  int v5; // r5
  int v6; // r0
  float *v7; // r0
  float v8; // s0
  float v9; // s4
  float v10; // s8
  float v11; // s2

  if ( ((unsigned int)&dword_60C94884[3] & ~(1614045604 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C94884[3]) )
  {
    dword_60C948B0 = 1126170624;
    dword_60C948B4 = 1126170624;
    dword_60C948B8 = -1021313024;
    dword_60C948BC = 1126170624;
    _cxa_guard_release(&dword_60C94884[3]);
  }
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7116));
  if ( ((unsigned int)&dword_60C7B364 & ~(1614045732 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  if ( ((unsigned int)&dword_60C881F4 & ~(1614045860 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
  {
    dword_60C881F0 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C881F4);
  }
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C881F0) == 1 )
    {
      v6 = FIELD_U32(a1, 7096);
      if ( v6 >= 0 )
      {
        if ( (unsigned int)v6 >= 4 )
          v6 = 0;
        v7 = *(float **)(PlayerMgr_instance + 4 * v6 + 32);
        if ( v7 )
        {
          v8 = v7[27];
          if ( (float)((float)(v8 - FIELD_F32(a1, 108)) * (float)byte_60AFE3F4[FIELD_U32(a1, 80)]) >= 0.0 )
          {
            v9 = v7[28];
            v10 = v7[144];
            v11 = v7[29] + v7[145];
            FIELD_F32(v5, 11832) = v8 + v7[143];
            FIELD_F32(v5, 11836) = v9 + v10;
            FIELD_F32(v5, 11840) = v11;
          }
        }
      }
    }
  }
}
