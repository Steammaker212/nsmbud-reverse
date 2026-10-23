/* sub_608CE364
 * address: 0x608CE364   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CE364(int a1, __int64 a2)
{
  int v4; // r0
  __int64 v5; // r6
  int result; // r0
  char *v7; // r0
  int v8; // r1
  char *v9; // r0

  v4 = 0;
  LODWORD(v5) = ((((unsigned __int64)-a2 >> 32) & 0x80000000) != 0LL) ^ __OFSUB__(0, HIDWORD(a2), (_DWORD)a2 == 0);
  HIDWORD(v5) = v5;
  if ( (_DWORD)v5 )
    HIDWORD(v5) = HIDWORD(a2);
  if ( FIELD_U64(a1, 32) < a2 )
    v4 = 1;
  if ( v4 )
    HIDWORD(v5) = FIELD_U32(a1, 36);
  if ( (_DWORD)v5 )
    LODWORD(v5) = a2;
  if ( v4 )
    LODWORD(v5) = FIELD_U32(a1, 32);
  FIELD_U64(a1, 40) = v5;
  result = FIELD_U8(a1, 12);
  if ( FIELD_U8(a1, 12) )
  {
    v7 = (char *)sub_608065A0();
    nn__os__LockMutex(v7 + 1408);
    nn__audio__SetDelayTime(a1 + 80, v8, FIELD_U32(a1, 40), FIELD_U32(a1, 44));
    v9 = (char *)sub_608065A0();
    return nn__os__UnlockMutex(v9 + 1408);
  }
  return result;
}
