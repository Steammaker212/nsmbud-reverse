/* sub_606B1F8C
 * address: 0x606B1F8C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B1F8C(int result)
{
  int v1; // r4
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  int v5; // r6
  int v6; // r7
  float v7; // s6
  float *v8; // r2
  float v9; // s10
  float v10; // s0
  float v11; // s12
  float v12; // [sp+4h] [bp-24h] BYREF
  float v13; // [sp+8h] [bp-20h]
  int v14; // [sp+Ch] [bp-1Ch]

  v1 = result;
  v2 = FIELD_U32(result, 56);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      if ( ((unsigned int)&dword_60CB2D18 & ~(1617633240 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2D18) )
      {
        dword_60CB2D14 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60CB2D18);
      }
      result = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB2D14);
      if ( result == 1 )
      {
        v5 = FIELD_U32(v1, 116);
        v6 = FIELD_U32(v3, 164);
        sub_6060A388(v3, (int)&v12);
        v7 = FIELD_F32(v1, 112);
        result = v5 + v6 - 0x40000000;
        v8 = (float *)((char *)sinLutTable + (((unsigned int)(v5 + v6) >> 20) & 0xFF0));
        v9 = (float)((v5 + v6) & 0xFFFFFF);
        v10 = *v8 + (float)((float)(v9 * v8[1]) * 0.000000059605);
        v12 = v12 + (float)(v7 * (float)(v8[2] + (float)((float)(v9 * v8[3]) * 0.000000059605)));
        v13 = v13 + (float)(v7 * v10);
        v11 = v13;
        *(float *)v1 = v12;
        FIELD_F32(v1, 4) = v11;
        FIELD_U32(v1, 8) = v14;
        FIELD_U32(v1, 80) = result;
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
