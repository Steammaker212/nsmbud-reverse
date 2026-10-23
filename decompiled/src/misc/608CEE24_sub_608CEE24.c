/* sub_608CEE24
 * address: 0x608CEE24   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CEE24(int a1, __int64 a2)
{
  int v3; // r1
  int v4; // r4
  int v6; // r0
  int result; // r0
  char *v8; // r0
  int v9; // r1
  char *v10; // r0

  v3 = 100000000;
  v4 = 0;
  v6 = 0;
  if ( a2 > 100000000 )
    v4 = HIDWORD(a2);
  if ( a2 > 20000000000LL )
    v6 = 1;
  if ( v6 )
    v4 = 4;
  if ( a2 > 100000000 )
    v3 = a2;
  if ( v6 )
    v3 = -1474836480;
  FIELD_U32(a1, 56) = v3;
  FIELD_U32(a1, 60) = v4;
  result = FIELD_U8(a1, 12);
  if ( FIELD_U8(a1, 12) )
  {
    v8 = (char *)sub_608065A0();
    nn__os__LockMutex(v8 + 1408);
    nn__audio__SetReverbDecayTime(a1 + 96, v9, FIELD_U32(a1, 56), FIELD_U32(a1, 60));
    v10 = (char *)sub_608065A0();
    return nn__os__UnlockMutex(v10 + 1408);
  }
  return result;
}
