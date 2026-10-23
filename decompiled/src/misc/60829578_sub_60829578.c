/* sub_60829578
 * address: 0x60829578   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829578(int a1, int a2)
{
  int v3; // r5
  int result; // r0

  v3 = 65 * a2;
  sub_60829624(FIELD_U32(a1, 40) + 520 * a2, FIELD_U32(a1, 40) + 520 * a2 + 16);
  sub_60829AA8(a1);
  memset((void *)(FIELD_U32(a1, 40) + 8 * v3 + 3136), 0, 0x208u);
  FIELD_U8(a1, 56) = 1;
  result = FIELD_U32(a1, 24);
  if ( !result )
  {
    if ( FIELD_U8(dword_60C9C114, 5992) )
      *(_BYTE *)(FIELD_U32(a1, 40) + 44316) = sub_6042BAEC(dword_60C9C114, (char *)(FIELD_U32(a1, 40) + 44317));
    FIELD_U32(a1, 24) = 2;
    return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 20) + 12))(FIELD_U32(a1, 20), 2, 1);
  }
  return result;
}
