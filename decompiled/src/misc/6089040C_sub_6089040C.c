/* sub_6089040C
 * address: 0x6089040C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089040C(_DWORD *a1, int a2, int a3, float a4)
{
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r2

  v6 = FIELD_U32(a2, 16);
  if ( a4 != 0.0 )
  {
    v7 = 1 << v6;
    if ( v6 - 32 >= 0 )
      v7 = 0;
    a1[23] |= v7;
  }
  if ( FIELD_U8(a2, 6) != 1 )
    a4 = 0.0;
  sub_60881594(a2, a3, 0, a1[587], a4);
  if ( FIELD_S32(a2, 352) >= 1 )
  {
    if ( FIELD_U8(a2, 8) )
    {
      ++a1[601];
      a1[602] += FIELD_U32(a2, 352);
      a1[603] += FIELD_U32(a2, 356);
      a1[605] += FIELD_U32(a2, 364);
      a1[606] += FIELD_U32(a2, 368);
      a1[607] += FIELD_U32(a2, 372);
      a1[604] += FIELD_U32(a2, 360);
      a1[608] += FIELD_U32(a2, 376);
      a1[609] += FIELD_U32(a2, 380);
      a1[610] += FIELD_U32(a2, 384);
      a1[611] += FIELD_U32(a2, 388);
      a1[612] += FIELD_U32(a2, 392);
      v8 = a1[614] + FIELD_U32(a2, 400);
      a1[614] = v8;
      a1[613] += FIELD_U32(a2, 396);
      a1[614] = v8 + FIELD_U32(a2, 400);
      *(_DWORD *)(a1[2] + 4 * v6 + 8) |= FIELD_U32(a2, 512);
      *(_DWORD *)(a1[2] + 4 * v6 + 1880) |= FIELD_U32(a2, 48);
      *(_DWORD *)(a1[2] + 4 * v6 + 2136) |= FIELD_U32(a2, 52);
      return 1;
    }
    goto LABEL_17;
  }
  if ( !FIELD_U8(a2, 8) )
  {
LABEL_17:
    debugPrintRelated3("Invalid EmitterSet has been detected. Invalidates handle.");
    FIELD_U32(a2, 32) = -1;
    return 0;
  }
  nn__os__LockMutex(a1 + 844);
  v10 = a1[286];
  v11 = a1[285];
  if ( v10 < 1 )
  {
LABEL_15:
    *(_DWORD *)(v11 + 4 * v10) = a2;
    ++a1[286];
  }
  else
  {
    v12 = 0;
    while ( *(_DWORD *)(v11 + 4 * v12) != a2 )
    {
      if ( ++v12 >= v10 )
        goto LABEL_15;
    }
  }
  nn__os__UnlockMutex(a1 + 844);
  return 0;
}
