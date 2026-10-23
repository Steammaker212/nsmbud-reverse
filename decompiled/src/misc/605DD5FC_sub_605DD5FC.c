/* sub_605DD5FC
 * address: 0x605DD5FC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DD5FC(int a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r0
  int result; // r0

  FIELD_U8(a1, 6956) = 0;
  FIELD_U32(a1, 6952) = 0;
  FIELD_U32(a1, 6948) = 0;
  FIELD_U32(a1, 6944) = 0;
  FIELD_U8(a1, 6972) = 0;
  FIELD_U32(a1, 6968) = 0;
  FIELD_U32(a1, 6964) = 0;
  FIELD_U32(a1, 6960) = 0;
  FIELD_U8(a1, 6988) = 0;
  FIELD_U32(a1, 6984) = 0;
  FIELD_U32(a1, 6980) = 0;
  FIELD_U32(a1, 6976) = 0;
  FIELD_U8(a1, 7004) = 0;
  FIELD_U32(a1, 7000) = 0;
  FIELD_U32(a1, 6996) = 0;
  FIELD_U32(a1, 6992) = 0;
  v2 = (_DWORD *)(a1 + 7756);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
  v3 = 3;
  if ( *v2 || (v4 = sub_605E34C4(a1, 3), v3 = 24, v4 == 1) )
    FIELD_U32(a1, 7288) = v3;
  result = FIELD_U8(a1, 6261);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 7288) = 0;
    return 7288;
  }
  return result;
}
