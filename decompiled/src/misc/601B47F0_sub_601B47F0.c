/* sub_601B47F0
 * address: 0x601B47F0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B47F0(int a1)
{
  int v2; // r6
  int v3; // r1
  int v4; // r0
  int v5; // r5
  int v6; // r7
  char v7; // r1
  int v8; // r1
  void (*v9)(void); // r1

  v2 = a1 + 920;
  v3 = dword_60C99DEC;
  v4 = FIELD_U32(dword_60C99DEC, 48);
  FIELD_U32(a1, 1248) = v4;
  FIELD_U32(a1, 264) = v4;
  v5 = FIELD_U32(v3, 44);
  v6 = FIELD_U8(v3, 66);
  sub_6078E608(*(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * v4) + 12), v5);
  v7 = v6;
  FIELD_U32(a1, 268) = v5;
  if ( v6 )
    v7 = 1;
  FIELD_U8(a1, 552) = (v5 == 8) | v7;
  v8 = **(_DWORD **)(*(_DWORD *)(v2 + 4 * FIELD_U32(a1, 1248)) + 4);
  if ( v6 )
    v9 = *(void (**)(void))(v8 + 156);
  else
    v9 = *(void (**)(void))(v8 + 160);
  v9();
  FIELD_U32(a1, 1000) = 0;
  FIELD_U32(a1, 180) = 0;
  return 0;
}
