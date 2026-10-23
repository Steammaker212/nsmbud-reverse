/* sub_6048F09C
 * address: 0x6048F09C   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048F09C(int result, int a2, int a3)
{
  _DWORD *v3; // r0
  char v4; // r1

  if ( a2 )
  {
    v3 = (_DWORD *)(result + 6276);
    *(_BYTE *)(*v3 + 64) |= 1u;
    *(_BYTE *)(v3[1] + 64) |= 1u;
    *(_BYTE *)(v3[2] + 64) |= 1u;
    *(_BYTE *)(v3[3] + 64) |= 1u;
    *(_BYTE *)(v3[4] + 64) |= 1u;
    *(_BYTE *)(v3[5] + 64) |= 1u;
    result = v3[6];
    v4 = FIELD_U8(result, 64) | 1;
LABEL_17:
    FIELD_U8(result, 64) = v4;
    return result;
  }
  if ( FIELD_U32(result, 5848) != a3 )
    *(_BYTE *)(FIELD_U32(result, 6276) + 64) &= ~1u;
  if ( FIELD_U32(result, 5852) != a3 )
    *(_BYTE *)(FIELD_U32(result, 6280) + 64) &= ~1u;
  if ( FIELD_U32(result, 5856) != a3 )
    *(_BYTE *)(FIELD_U32(result, 6284) + 64) &= ~1u;
  if ( FIELD_U32(result, 5860) != a3 )
    *(_BYTE *)(FIELD_U32(result, 6288) + 64) &= ~1u;
  if ( FIELD_U32(result, 5864) != a3 )
    *(_BYTE *)(FIELD_U32(result, 6292) + 64) &= ~1u;
  if ( FIELD_U32(result, 5868) != a3 )
    *(_BYTE *)(FIELD_U32(result, 6296) + 64) &= ~1u;
  if ( FIELD_U32(result, 5872) != a3 )
  {
    result = FIELD_U32(result, 6300);
    v4 = FIELD_U8(result, 64) & 0xFE;
    goto LABEL_17;
  }
  return result;
}
