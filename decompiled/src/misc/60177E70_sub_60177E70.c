/* sub_60177E70
 * address: 0x60177E70   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60177E70(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  int v7; // r7
  int i; // r4
  int v9; // r6
  int v10; // r0

  v6 = 0;
  do
  {
    v7 = a1 + v6;
    v6 += 104;
    **(_BYTE **)(v7 + 28) = 0;
    FIELD_U32(v7, 64) = 0;
    FIELD_U32(v7, 60) = 0;
    FIELD_U32(v7, 56) = 0;
    FIELD_U32(v7, 52) = 0;
    FIELD_U32(v7, 48) = 0;
    FIELD_U32(v7, 44) = 0;
    FIELD_U32(v7, 88) = -1;
    FIELD_U32(v7, 84) = -1;
    FIELD_U32(v7, 80) = -1;
    FIELD_U32(v7, 76) = -1;
    FIELD_U32(v7, 72) = -1;
    FIELD_U32(v7, 68) = -1;
    FIELD_U32(v7, 92) = 0;
    FIELD_U32(v7, 96) = 0;
    FIELD_U32(v7, 100) = 0;
    FIELD_U32(v7, 104) = -1;
    FIELD_U32(v7, 112) = -1;
    FIELD_U32(v7, 116) = -1;
    FIELD_U32(v7, 120) = 0;
  }
  while ( v6 != 26624 );
  sub_60177B88(a1, a2, a3, a4);
  for ( i = 0; i != 26624; i += 104 )
  {
    v9 = a1 + i;
    v10 = sub_6040D864(a1 + i + 24);
    FIELD_U32(v9, 112) = v10;
  }
  sub_60177F44(a1, a2);
  return sub_6017833C(a1, a2);
}
