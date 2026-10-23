/* sub_6022E81C
 * address: 0x6022E81C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022E81C(int a1)
{
  int v2; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3
  int *v5; // r0
  void (__fastcall *v6)(int, float); // r1
  int v7; // r0
  int v9; // r5

  v2 = FIELD_U32(a1, 8);
  v3 = FIELD_U32(a1, 32);
  v4 = FIELD_U32(v2, 24);
  v5 = *(int **)(v2 + 28);
  v6 = *(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 12);
  if ( v4 > v3 )
    v5 += v3;
  v7 = *v5;
  if ( FIELD_U8(a1, 36) )
  {
    v6(a1, FIELD_F32(v7, 12));
    return (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 24))(a1, 1.0);
  }
  else
  {
    v9 = v7 + 4;
    v6(a1, FIELD_F32(v7, 8) + -1.0);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 24))(a1, 1.0);
    sub_604183EC(v9);
    return sub_604183EC(v9);
  }
}
