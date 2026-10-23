/* sub_60497D08
 * address: 0x60497D08   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60497D08(int a1)
{
  int v2; // r0
  unsigned int i; // r6
  unsigned int v4; // r1
  int v5; // r1

  sub_6047F3A8((unsigned int *)(a1 + 146876), FIELD_U32(a1, 146848));
  v2 = FIELD_U32(a1, 146864);
  if ( v2 >= 1 )
  {
    for ( i = 0; (int)i < v2; ++i )
    {
      v4 = 0;
      if ( i < 4 )
        v4 = i;
      v5 = a1 + 20556 * v4;
      if ( FIELD_U8(v5, 26272) )
      {
        sub_60499C20(a1, FIELD_U32(v5, 26224), FIELD_U32(v5, 26256));
        v2 = FIELD_U32(a1, 146864);
      }
    }
  }
  if ( FIELD_U8(a1, 131453) )
    FIELD_U8(a1, 131459) = 0;
  if ( FIELD_U8(a1, 134441) )
    FIELD_U8(a1, 134447) = 0;
  if ( FIELD_U8(a1, 137429) )
    FIELD_U8(a1, 137435) = 0;
  if ( FIELD_U8(a1, 140417) )
    FIELD_U8(a1, 140423) = 0;
  if ( FIELD_U8(a1, 143405) )
    FIELD_U8(a1, 143411) = 0;
  if ( FIELD_U8(a1, 146393) )
    FIELD_U8(a1, 146399) = 0;
  sub_605025FC(a1 + 3648);
  FIELD_U16(a1, 4700) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3688));
  sub_60502A24(a1 + 3648, &unk_60B02B94, 8, 0);
  sub_60502C04(a1 + 3648, &unk_60B02BB4, 1);
  FIELD_U32(a1, 4676) = 8;
  FIELD_U8(a1, 4691) = 0;
  FIELD_U8(a1, 4688) = 1;
  return 4688;
}
