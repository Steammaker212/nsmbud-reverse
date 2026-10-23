/* sub_60699C44
 * address: 0x60699C44   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60699C44(unsigned int *a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r6
  char v3; // r12
  int v4; // r5
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r7
  int result; // r0
  char v9; // r12
  float *v10; // r6

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( ((unsigned int)&dword_60CB9550 & ~(1617534076 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9550) )
  {
    dword_60CB954C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB9550);
  }
  if ( v2 )
  {
    v4 = (**v2)(v2, &dword_60CB954C);
    if ( v4 )
      v4 = (int)v2;
  }
  else
  {
    v4 = 0;
  }
  v5 = a1[2];
  v6 = FIELD_U32(v4, 156);
  v7 = v6 - v5;
  if ( (int)(v6 - v5) < 0 )
    v7 = v5 - v6;
  if ( v7 >= 0x7C000001 )
    goto LABEL_12;
  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, *a1);
  v10 = (float *)result;
  if ( result )
  {
    if ( (unsigned __int8)(FIELD_U8(result, 533) - 1) > 1u )
    {
      result = Actor__getProfileId((Actor *)result);
      if ( result == 524 || result == 392 )
      {
        if ( v10[31] > 0.0 || (*(_BYTE *)((*(int (__fastcall **)(float *))(*(_DWORD *)v10 + 80))(v10) + 2224) & 1) != 0 )
          goto LABEL_12;
        v10[28] = FIELD_F32(v4, 112)
                + (float)((float)(FIELD_F32(v4, 6124) * 0.5)
                        * (float)(*(float *)((char *)&sinLutTable[2] + ((v7 >> 20) & 0xFF0))
                                + (float)((float)((float)(v7 & 0xFFFFFF)
                                                * *(float *)((char *)&sinLutTable[3] + ((v7 >> 20) & 0xFF0)))
                                        * 0.000000059605)));
        return v4 + 6124;
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1617534300 << v9) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
      }
      result = (**(int (__fastcall ***)(float *, int *))v10)(v10, &dword_60C7B378);
      if ( result == 1 )
      {
        if ( v10[31] <= 0.0 )
          return sub_607600F4(
                   v10,
                   FIELD_F32(v4, 112)
                 + (float)((float)(FIELD_F32(v4, 6124) * 0.5)
                         * (float)(*(float *)((char *)&sinLutTable[2] + ((v7 >> 20) & 0xFF0))
                                 + (float)((float)((float)(v7 & 0xFFFFFF)
                                                 * *(float *)((char *)&sinLutTable[3] + ((v7 >> 20) & 0xFF0)))
                                         * 0.000000059605))));
LABEL_12:
        *a1 = 0;
        return 0;
      }
    }
  }
  return result;
}
