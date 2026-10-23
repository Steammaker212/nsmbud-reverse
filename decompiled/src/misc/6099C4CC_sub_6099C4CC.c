/* sub_6099C4CC
 * address: 0x6099C4CC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099C4CC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r5
  unsigned int v9; // r2
  int v10; // r7
  unsigned int v11; // r0
  bool v12; // zf
  unsigned int v13; // r1
  int v14; // r3
  unsigned int v15; // r2
  _DWORD *v16; // r3

  v8 = 0;
  sead__Heap__ctor(a2, a1, 0, a4, a5, 1, a6);
  v10 = a2 + 148;
  *(_DWORD *)a2 = off_60C60C44;
  FIELD_U32(a2, 24) = &off_60C60CB8;
  FIELD_U32(a2, 124) = a2 + 124;
  FIELD_U32(a2, 128) = a2 + 124;
  FIELD_U32(a2, 132) = 0;
  FIELD_U32(a2, 136) = 0;
  FIELD_U32(a2, 140) = 0;
  FIELD_U32(a2, 144) = 0;
  v11 = FIELD_U8(a2, 120);
  if ( (v11 & 1) != 0 )
  {
    v8 = a2 + 84;
    v11 = sead__CriticalSection__lock(a2 + 84);
  }
  v12 = v10 == 0;
  if ( a2 != -148 )
  {
    v9 = a3 - 148;
    v11 = (unsigned int)(a3 - 148) >> 4;
    v12 = v11 == 0;
  }
  if ( !v12 )
  {
    v13 = v11 - 1;
    FIELD_U32(a2, 136) = v10;
    if ( v9 >= 0x20 )
    {
      v14 = 0;
      if ( (v13 & 1) != 0 )
      {
        v14 = 1;
        FIELD_U32(a2, 148) = a2 + 164;
      }
      if ( v11 != 2 )
      {
        v15 = v13 - v14;
        v16 = (_DWORD *)(v10 + 16 * v14 + 16);
        do
        {
          *(v16 - 4) = v16;
          v15 -= 2;
          *v16 = v16 + 4;
          v16 += 8;
        }
        while ( v15 );
      }
    }
    *(_DWORD *)(v10 + 16 * v13) = 0;
    FIELD_U32(a2, 140) = v10;
    FIELD_U32(a2, 144) = v11;
  }
  if ( v8 )
    sead__CriticalSection__unlock(v8);
  return a2;
}
