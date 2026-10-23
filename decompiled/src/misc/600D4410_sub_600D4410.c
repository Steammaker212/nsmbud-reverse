/* sub_600D4410
 * address: 0x600D4410   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D4410(int a1)
{
  int v2; // r0

  FIELD_U8(EnemyCounterMaybe_instance, 20) = 1;
  v2 = dword_60C99D88;
  FIELD_U32(dword_60C99D88, 32) = 1;
  FIELD_U8(v2, 31) = 0;
  if ( FIELD_U8(a1, 6122) )
    sub_6077A268(dword_60CBFA90);
  else
    sub_6077A260(dword_60CBFA90);
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  FIELD_U32(dword_60C99DD4, 1376) |= 2u;
  FIELD_U32(a1, 6124) = 1;
  return 6124;
}
