/* sub_608CECD4
 * address: 0x608CECD4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CECD4(int a1, __int64 a2)
{
  _BOOL4 v4; // r1
  int v5; // r0
  int result; // r0
  char *v7; // r0
  int v8; // r1
  char *v9; // r0

  v4 = a2 > 300000000;
  v5 = ((((unsigned __int64)-a2 >> 32) & 0x80000000) != 0LL) ^ __OFSUB__(0, HIDWORD(a2), (_DWORD)a2 == 0);
  if ( !v5 )
    HIDWORD(a2) = 0;
  if ( v4 )
    HIDWORD(a2) = 0;
  if ( v5 )
    v5 = a2;
  if ( v4 )
    v5 = 300000000;
  FIELD_U32(a1, 40) = v5;
  FIELD_U32(a1, 44) = HIDWORD(a2);
  result = FIELD_U8(a1, 12);
  if ( FIELD_U8(a1, 12) )
  {
    v7 = (char *)sub_608065A0();
    nn__os__LockMutex(v7 + 1408);
    nn__audio__SetReverbPredelayTime(a1 + 96, v8, FIELD_U32(a1, 40), FIELD_U32(a1, 44));
    v9 = (char *)sub_608065A0();
    return nn__os__UnlockMutex(v9 + 1408);
  }
  return result;
}
