/* sub_60793B2C
 * address: 0x60793B2C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793B2C(int a1, int a2)
{
  int v3; // r3
  void *v4; // r0
  __int64 v5; // r0
  int v6; // r3
  void *v7; // r0
  __int64 v8; // kr00_8
  int v9; // r1

  if ( a2 != 1 )
  {
    if ( !a2 )
    {
      v3 = FIELD_U32(a1, 168);
      v4 = (void *)sead__GlobalRandom__sInstance;
      if ( !v3 )
        v4 = (void *)(dword_60C9CF0C + 1340);
      v5 = 3LL * sead__Random__getU32(v4);
      FIELD_U32(a1, 212) = HIDWORD(v5);
      return v5;
    }
    LODWORD(v5) = FIELD_U32(a1, 212);
    if ( (unsigned int)v5 < 3 )
      return v5;
LABEL_13:
    FIELD_U32(a1, 212) = 0;
    LODWORD(v5) = 0;
    return v5;
  }
  v6 = FIELD_U32(a1, 168);
  v7 = (void *)sead__GlobalRandom__sInstance;
  if ( !v6 )
    v7 = (void *)(dword_60C9CF0C + 1340);
  v8 = 10LL * sead__Random__getU32(v7);
  LODWORD(v5) = HIDWORD(v8);
  if ( HIDWORD(v8) <= 5 )
    goto LABEL_13;
  v9 = 2;
  if ( HIDWORD(v8) < 9 )
    v9 = 1;
  FIELD_U32(a1, 212) = v9;
  return v5;
}
