/* sub_601C518C
 * address: 0x601C518C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_601C518C(float *a1, int a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r7
  char v7; // r12
  float v8; // r0
  float v9; // s0
  float *result; // r0
  float v11; // r1
  float v12; // s2
  float v13; // s4
  int v14; // [sp+0h] [bp-38h]

  v4 = 0;
  if ( sub_60190968(dword_60C8996C) )
  {
    v14 = a2;
    v5 = 0;
    v6 = dword_60C8996C + 1304;
    while ( 1 )
    {
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(v6 + 4 * v5));
      if ( ((unsigned int)&dword_60C8AE9C & ~(1612468800 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AE9C) )
      {
        dword_60C8AE98 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8AE9C);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8AE98) )
        break;
      if ( ++v5 == 18 )
      {
        v4 = 0;
        break;
      }
    }
    a2 = v14;
  }
  a1[20] = FIELD_F32(v4, 80);
  v8 = FIELD_F32(v4, 84);
  a1[21] = v8;
  v9 = v8;
  result = a1 + 21;
  v11 = FIELD_F32(v4, 88);
  a1[22] = v11;
  if ( a2 == 11 )
  {
    v12 = 50.0;
  }
  else
  {
    if ( a2 != 10 )
      return result;
    v12 = 180.0;
    v13 = v9 + 120.0;
    v9 = v11;
    *result = v13;
    result = a1 + 22;
  }
  *result = v12 + v9;
  return result;
}
