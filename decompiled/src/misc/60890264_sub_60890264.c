/* sub_60890264
 * address: 0x60890264   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60890264(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r0
  char v6; // r7
  int v7; // r3
  int v8; // r1
  int v9; // r2
  _DWORD *v10; // r3
  int v11; // r7

  if ( FIELD_U8(a1, 26) )
  {
    v2 = 0;
    ++FIELD_U32(a1, 88);
    FIELD_U32(a1, 92) = 0;
    memset((void *)(a1 + 2404), 0, 68);
    sub_608822F8();
    sub_6089751C(a1 + 2928);
    if ( FIELD_S32(a1, 4) >= 1 )
    {
      v3 = 2136;
      do
      {
        memset((void *)(FIELD_U32(a1, 8) + v3 - 2128), 0, 0x100u);
        memset((void *)(FIELD_U32(a1, 8) + v3 - 256), 0, 0x100u);
        memset((void *)(FIELD_U32(a1, 8) + v3), 0, 0x100u);
        ++v2;
        v3 += 2416;
      }
      while ( v2 < FIELD_U32(a1, 4) );
    }
    nn__os__LockMutex(a1 + 3376);
    if ( FIELD_S32(a1, 1144) >= 1 )
    {
      v4 = 0;
      do
      {
        sub_608814B4(*(_DWORD *)(FIELD_U32(a1, 1140) + 4 * v4));
        EmitterSet_Remove_Failed_ref(a1, *(_DWORD *)(FIELD_U32(a1, 1140) + 4 * v4));
        *(_DWORD *)(FIELD_U32(a1, 1140) + 4 * v4++) = 0;
      }
      while ( v4 < FIELD_U32(a1, 1144) );
    }
    FIELD_U32(a1, 1144) = 0;
    nn__os__UnlockMutex(a1 + 3376);
    nn__os__LockMutex(a1 + 3396);
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = a1 + 4 * v5;
      v8 = FIELD_U32(v7, 628);
      if ( v8 )
      {
        v9 = v7 + 372;
        v10 = (_DWORD *)(v7 + 116);
        do
        {
          v11 = FIELD_U32(v8, 416);
          if ( *v10 )
          {
            *(_DWORD *)(*(_DWORD *)v9 + 416) = v8;
            FIELD_U32(v8, 420) = *(_DWORD *)v9;
          }
          else
          {
            *v10 = v8;
            FIELD_U32(v8, 420) = 0;
          }
          FIELD_U32(v8, 416) = 0;
          *(_DWORD *)v9 = v8;
          FIELD_U8(v8, 11) = 0;
          v8 = v11;
        }
        while ( v11 );
        v6 = 1;
      }
      ++v5;
    }
    while ( v5 != 64 );
    nn__os__UnlockMutex(a1 + 3396);
    if ( (v6 & 1) != 0 )
      memset((void *)(a1 + 628), 0, 0x200u);
  }
}
