/* BlockBase__vf16C
 * address: 0x605640BC   size: 236   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60576938 : BabyYoshiBlock
//   - 0x60569738 : FlyingBlockForAmbush
int __fastcall BlockBase__vf16C(int a1)
{
  int v2; // r1
  int *v3; // r5
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r0

  v2 = 1;
  v3 = (int *)(a1 + 6856);
  if ( FIELD_U32(a1, 6856) == 13 )
  {
    v4 = sub_605B9044(dword_60CB061C, a1 + 6980);
    v2 = 0;
    if ( (v4 | 1) == 3 )
    {
      v5 = 12;
      if ( v4 == 3 )
        v5 = 14;
      *v3 = v5;
      v2 = 1;
    }
  }
  v6 = FIELD_U32(a1, 7368);
  if ( v6 == 1 )
  {
    if ( ((unsigned __int8)v2 & (*v3 != 21)) == 0 )
      goto LABEL_12;
  }
  else if ( v2 != 1 )
  {
    goto LABEL_11;
  }
  sub_605BA078(dword_60CB061C, a1 + 6980, 1, FIELD_U8(LevelInfo_instance, 18));
  v6 = FIELD_U32(a1, 7368);
LABEL_11:
  if ( v6 <= 1 )
LABEL_12:
    sub_605B6364(a1, v3, FIELD_S8(a1, 6850));
  return sub_605641B4(a1);
}
