/* sub_6082C68C
 * address: 0x6082C68C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082C68C(int a1)
{
  _BYTE *v1; // r7
  int i; // r7
  int v3; // r10
  int result; // r0

  v1 = *(_BYTE **)(a1 + 40);
  v1[6256] = off_60C5CB00((unsigned __int8)v1[6256]);
  v1[6257] = off_60C5CB00((unsigned __int8)v1[6257]);
  v1[6258] = off_60C5CB00((unsigned __int8)v1[6258]);
  v1[6259] = off_60C5CB00((unsigned __int8)v1[6259]);
  v1[6260] = off_60C5CB00((unsigned __int8)v1[6260]);
  v1[6261] = off_60C5CB00((unsigned __int8)v1[6261]);
  v1[6262] = off_60C5CB00((unsigned __int8)v1[6262]);
  for ( i = 0; i != 13312; i += 104 )
  {
    v3 = FIELD_U32(a1, 40) + i;
    FIELD_U8(v3, 6264) = off_60C5CB00(FIELD_U8(v3, 6264));
    FIELD_U8(v3, 6265) = off_60C5CB00(FIELD_U8(v3, 6265));
    FIELD_U32(v3, 6360) = off_60C5CB10(FIELD_U32(v3, 6360));
    result = off_60C5CB10(FIELD_U32(v3, 6364));
    FIELD_U32(v3, 6364) = result;
  }
  return result;
}
