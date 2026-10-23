/* sub_608D9CAC
 * address: 0x608D9CAC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9CAC(int a1)
{
  int v2; // r0
  int v3; // r0
  int *v4; // r6
  unsigned int v5; // r5
  char v6; // r7
  int result; // r0

  sub_608D4178(FIELD_U32(a1, 84), FIELD_U32(a1, 48));
  v2 = FIELD_U32(a1, 64);
  if ( !v2 )
  {
    v5 = FIELD_U32(a1, 60);
    if ( v5 == -1 )
    {
      v2 = 0;
    }
    else
    {
      v6 = 0;
      v4 = (int *)(a1 + 80);
      if ( !sub_608B2C3C(FIELD_U32(a1, 84) + 12, FIELD_U32(a1, 60), FIELD_U32(a1, 80), 2, 0) )
        goto LABEL_10;
      v2 = sub_608B4094((_DWORD *)(FIELD_U32(a1, 84) + 12), v5);
      FIELD_U32(a1, 64) = v2;
    }
  }
  v3 = sub_608C6E60(v2, FIELD_U32(a1, 68), FIELD_U32(a1, 48), (_DWORD *)(FIELD_U32(a1, 52) + 12));
  if ( v3 )
  {
    v4 = (int *)(a1 + 80);
LABEL_9:
    v6 = 1;
    FIELD_U32(a1, 72) = FIELD_U32(a1, 64);
    FIELD_U32(a1, 76) = v3;
    goto LABEL_10;
  }
  v4 = (int *)(a1 + 80);
  v6 = 0;
  if ( sub_608B427C(
         (int *)(FIELD_U32(a1, 84) + 12),
         FIELD_U32(a1, 64),
         FIELD_U32(a1, 68),
         FIELD_U32(a1, 80)) == 1 )
  {
    v3 = sub_608C6E60(
           FIELD_U32(a1, 64),
           FIELD_U32(a1, 68),
           FIELD_U32(a1, 48),
           (_DWORD *)(FIELD_U32(a1, 84) + 12));
    goto LABEL_9;
  }
LABEL_10:
  result = *v4;
  *(_BYTE *)(*v4 + 20) = 2;
  FIELD_U8(a1, 88) = v6;
  return result;
}
