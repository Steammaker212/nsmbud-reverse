/* sub_608C9074
 * address: 0x608C9074   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9074(int *a1, int a2)
{
  int i; // r0
  char *v5; // r0
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r12
  int v9; // r2
  int v10; // r6
  int v11; // r3
  int result; // r0

  for ( i = FIELD_U32(a2, 184); i; i = FIELD_U32(i, 32) )
    FIELD_U32(i, 28) = 3;
  FIELD_U32(a2, 184) = 0;
  FIELD_U32(a2, 188) = 0;
  FIELD_U32(a2, 192) = 0;
  if ( FIELD_U8(a2, 37) )
  {
    v5 = (char *)sub_608065A0();
    nn__audio__ReleaseVoiceSlot(v5 + 12, a2 + 32);
    FIELD_U8(a2, 37) = 0;
  }
  FIELD_U32(a2, 196) = 0;
  FIELD_U32(a2, 164) = 1;
  FIELD_U8(a2, 36) = 0;
  v6 = *a1;
  v7 = a1[2] - 1;
  v8 = (unsigned int)(a2 - *a1) >> 8;
  v9 = *(_DWORD *)(a1[3] + 4 * v8);
  a1[2] = v7;
  v10 = a1[1];
  v11 = *(_DWORD *)(v10 + 4 * v7);
  *(_DWORD *)(v10 + 4 * v9) = v11;
  *(_DWORD *)(a1[1] + 4 * v7) = a2;
  *(_DWORD *)(a1[3] + 4 * ((unsigned int)(v11 - v6) >> 8)) = v9;
  result = a1[3];
  *(_DWORD *)(result + 4 * v8) = -1;
  return result;
}
