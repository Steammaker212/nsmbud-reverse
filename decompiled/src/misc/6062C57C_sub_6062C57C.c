/* sub_6062C57C
 * address: 0x6062C57C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_6062C57C(int a1))(_DWORD, int *)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r6
  int v5; // r0
  float v6; // s0
  float v7; // s0
  float v8; // s0

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6124));
  if ( v2 )
  {
    if ( ((unsigned int)dword_60CB3EF4 & ~(1617085888 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CB3EF4) )
    {
      dword_60CB3EF0 = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60CB3EF4);
    }
    v4 = (int)(v2 + 462);
    if ( !(**v2)(v2, &dword_60CB3EF0) )
      v4 = 1848;
    v5 = FIELD_U32(a1, 6128);
    v6 = *(float *)v4 * FIELD_F32(a1, 6120);
    switch ( v5 )
    {
      case 2:
        v8 = v6 + FIELD_F32(a1, 6132);
        break;
      case 1:
        v7 = FIELD_F32(a1, 6132) - v6;
        goto LABEL_13;
      case 0:
        v7 = v6 + FIELD_F32(a1, 6132);
LABEL_13:
        FIELD_F32(a1, 108) = v7;
        return v2;
      default:
        v8 = FIELD_F32(a1, 6132) - v6;
        break;
    }
    FIELD_F32(a1, 112) = v8;
  }
  return v2;
}
