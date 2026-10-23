/* sub_606B1860
 * address: 0x606B1860   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606B1860(int a1, float result)
{
  unsigned int v3; // r1
  int v4; // r5
  char v5; // r12
  int v6; // r0
  float v7; // s0
  float v8; // s0

  v3 = FIELD_U32(a1, 56);
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( v4 )
    {
      if ( ((unsigned int)dword_60CB3EF4 & ~(1617631400 << v5) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(dword_60CB3EF4) )
        {
          dword_60CB3EF0 = (int)&off_60BC00BC;
          _cxa_guard_release(dword_60CB3EF4);
        }
      }
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CB3EF0) == 1 )
      {
        v6 = FIELD_U32(a1, 144);
        v7 = FIELD_F32(v4, 1848) * FIELD_F32(a1, 148);
        switch ( v6 )
        {
          case 2:
            *(_DWORD *)a1 = FIELD_U32(a1, 12);
            result = v7 + FIELD_F32(a1, 16);
            FIELD_F32(a1, 4) = result;
            return result;
          case 1:
            v8 = FIELD_F32(a1, 12) - v7;
            goto LABEL_15;
          case 0:
            v8 = v7 + FIELD_F32(a1, 12);
LABEL_15:
            *(float *)a1 = v8;
            result = FIELD_F32(a1, 16);
            FIELD_F32(a1, 4) = result;
            return result;
        }
        *(_DWORD *)a1 = FIELD_U32(a1, 12);
        result = FIELD_F32(a1, 16) - v7;
        FIELD_F32(a1, 4) = result;
      }
    }
    else
    {
      FIELD_U32(a1, 68) = 1;
    }
  }
  return result;
}
