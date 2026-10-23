/* sub_604D99B0
 * address: 0x604D99B0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D99B0(int a1, _BYTE *a2)
{
  char v2; // r12
  int v5; // r1
  int v6; // r2
  int v7; // r1
  int result; // r0
  int v9; // r2

  if ( ((unsigned int)&dword_60CA4D40[5] & ~(1615698388 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D40[5]) )
  {
    qword_60CA4DE0 = 0x300000004LL;
    _cxa_guard_release(&dword_60CA4D40[5]);
  }
  FIELD_U32(a1, 20500) = 0;
  FIELD_U32(a1, 20504) = 0;
  v5 = a1;
  if ( (unsigned int)qword_60CA4DE0 < 0x100 )
    v5 = a1 + qword_60CA4DE0;
  if ( *a2 )
  {
    if ( FIELD_U8(v5, 4192) )
      goto LABEL_12;
    v6 = 2;
  }
  else
  {
    if ( !FIELD_U8(v5, 4192) )
      goto LABEL_12;
    v6 = 1;
  }
  FIELD_U32(a1, 20500) = v6;
LABEL_12:
  v7 = a1;
  if ( HIDWORD(qword_60CA4DE0) < 0x100 )
    v7 = a1 + HIDWORD(qword_60CA4DE0);
  result = FIELD_U8(v7, 4192);
  if ( a2[1] )
  {
    if ( FIELD_U8(v7, 4192) )
      return result;
    v9 = 2;
  }
  else
  {
    if ( !FIELD_U8(v7, 4192) )
      return result;
    v9 = 1;
  }
  FIELD_U32(a1, 20504) = v9;
  return a1 + 4;
}
