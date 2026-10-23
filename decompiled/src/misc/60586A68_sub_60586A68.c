/* sub_60586A68
 * address: 0x60586A68   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60586A68(int a1)
{
  char v2; // r12
  int v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r4
  _DWORD v5[6]; // [sp+4h] [bp-24h] BYREF
  char v6; // [sp+1Ch] [bp-Ch]

  v5[0] = FIELD_U32(a1, 6980);
  v5[1] = FIELD_U32(a1, 6984);
  v5[2] = FIELD_U32(a1, 6988);
  v5[4] = 1;
  v5[5] = FIELD_U8(a1, 7481);
  v6 = FIELD_U8(LevelInfo_instance, 18);
  v5[3] = 2;
  sub_60582938(dword_60CAF15C, (int)v5);
  v3 = FIELD_U32(a1, 7308);
  if ( v3 )
    sub_6058568C(dword_60CAF15C, v3, FIELD_U32(a1, 7316));
  v4 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60CAF218 & ~(1616407320 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF218) )
  {
    dword_60CAF214 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CAF218);
  }
  if ( v4 )
  {
    if ( (**v4)(v4, &dword_60CAF214) == 1 )
      sub_60587F34(v4);
  }
}
