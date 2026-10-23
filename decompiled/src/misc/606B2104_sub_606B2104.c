/* sub_606B2104
 * address: 0x606B2104   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B2104(int result)
{
  int v1; // r4
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  unsigned int v5; // r2
  float *v6; // r3
  float v7; // s12
  float v8; // s0
  float v9; // s2

  v1 = result;
  v2 = FIELD_U32(result, 56);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      if ( ((unsigned int)&dword_60CB4234 & ~(1617633612 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB4234) )
      {
        dword_60CB4230 = (int)&off_60C126F8;
        _cxa_guard_release(&dword_60CB4234);
      }
      result = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB4230);
      if ( result == 1 )
      {
        result = v3 + 6524;
        v5 = FIELD_U32(v1, 120) + FIELD_U32(v3, 6564);
        v6 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
        v7 = FIELD_F32(v1, 112);
        v8 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
        v9 = FIELD_F32(v3, 6524) + (float)(v7 * (float)(*v6 + (float)(v6[1] * v8)));
        *(float *)v1 = FIELD_F32(v3, 6520) + (float)(v7 * (float)(v6[2] + (float)(v8 * v6[3])));
        FIELD_F32(v1, 4) = v9;
      }
    }
    else
    {
      FIELD_U32(v1, 68) = 1;
      return 1;
    }
  }
  return result;
}
