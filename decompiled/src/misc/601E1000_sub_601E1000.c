/* sub_601E1000
 * address: 0x601E1000   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601E1000(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  float v6; // r1
  int v7; // r0
  float result; // s0
  int (__fastcall ***v9)(_DWORD, int *); // r5
  char v10; // r12
  int v11; // r0

  if ( sub_601DA074(a2) )
  {
    v4 = sub_601A4454(dword_60C89E18, *(_DWORD *)a2, FIELD_U32(a2, 4));
    v5 = sub_60178780(v4, FIELD_U32(a2, 8));
    *(_DWORD *)a1 = FIELD_U32(v5, 72);
    v6 = FIELD_F32(v5, 76);
    FIELD_F32(a1, 4) = v6;
    v7 = FIELD_U32(v5, 80);
  }
  else
  {
    if ( !sub_601D9E28(a2) )
      return result;
    v9 = (int (__fastcall ***)(_DWORD, int *))sub_601698C4(867, (_DWORD *)a2);
    if ( ((unsigned int)&dword_60C8B0E4 & ~(1612583060 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B0E4) )
    {
      dword_60C8B0E0 = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C8B0E4);
    }
    if ( v9 )
    {
      v11 = (**v9)(v9, &dword_60C8B0E0);
      if ( v11 )
        v11 = (int)v9;
    }
    else
    {
      v11 = 0;
    }
    *(_DWORD *)a1 = FIELD_U32(v11, 80);
    v6 = FIELD_F32(v11, 84);
    FIELD_F32(a1, 4) = v6;
    v7 = FIELD_U32(v11, 88);
  }
  FIELD_U32(a1, 8) = v7;
  FIELD_F32(a1, 4) = v6 + 60.0;
  return v6 + 60.0;
}
