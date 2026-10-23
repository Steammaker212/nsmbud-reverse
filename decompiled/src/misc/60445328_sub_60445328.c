/* sub_60445328
 * address: 0x60445328   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445328(int a1, unsigned int a2, int a3)
{
  unsigned int v6; // r1
  int v7; // r0
  bool v8; // cc
  int v9; // r1
  int *v10; // r5
  int v11; // r6
  int v12; // r11
  int v13; // r7
  int v14; // t1

  FIELD_U8(a1, 884) = 1;
  v6 = FIELD_U32(a1, 896);
  v7 = FIELD_U32(a1, 900);
  v8 = v6 > a2;
  v9 = FIELD_U32(a1, 56);
  if ( v8 )
    v7 += a2 << 7;
  if ( v9 )
  {
    v10 = *(int **)(a1 + 64);
    v11 = 4 * v9;
    v12 = v7 + 52;
    v13 = v7 + 4;
    do
    {
      v14 = *v10++;
      (*(void (__fastcall **)(int, _DWORD, unsigned int, int, int, int))(*(_DWORD *)v14 + 28))(
        v14,
        FIELD_U32(a3, 40),
        a2,
        v13,
        v12,
        a1);
      v11 -= 4;
    }
    while ( v11 );
  }
  FIELD_U8(a1, 884) = 0;
  return 0;
}
