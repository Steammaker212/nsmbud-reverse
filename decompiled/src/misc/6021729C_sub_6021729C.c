/* sub_6021729C
 * address: 0x6021729C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021729C(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  signed int v8; // [sp+0h] [bp-18h] BYREF
  signed int v9; // [sp+4h] [bp-14h] BYREF

  v9 = 0x10000000;
  v8 = 0x20000;
  sub_608322C0((int *)(a1 + 308), (int *)(a1 + 304), &v9, &v8);
  sub_601861EC((Actor *)a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 276));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    sub_60217114(a1);
    v2 = **(_DWORD **)(a1 + 276);
    if ( ((unsigned int)&dword_60C80400 & ~(1612804876 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
    {
      dword_60C803FC = (int)&off_60BC3228;
      _cxa_guard_release(&dword_60C80400);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C803FC) == 1 )
    {
      v4 = FIELD_U32(v2, 68);
      FIELD_U32(v4, 44) = a1 + 268;
      LOWORD(v5) = -1;
      v6 = FIELD_U32(a1, 280);
      if ( v6 >= 0 && FIELD_U16(v4, 40) > v6 )
        v5 = FIELD_U32(a1, 280);
      FIELD_U16(v4, 42) = v5;
    }
  }
  return 1;
}
