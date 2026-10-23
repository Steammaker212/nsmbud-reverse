/* sub_60886834
 * address: 0x60886834   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60886834(int a1, int a2)
{
  nn__util__BinaryFileHeader *v3; // r0
  int FirstBlock; // r0
  nn__util__BinaryFileHeader *v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r5
  int v15; // r4
  int v16; // r6
  int v17; // r1
  int result; // r0

  FIELD_U32(a1, 988) = 0;
  if ( a2 )
    FIELD_U32(a1, 948) = a2;
  else
    debugPrintRelated3("Heap is not set in the argument of the resource destruction method.");
  if ( FIELD_U32(a1, 1060) )
  {
    --FIELD_U32(a1, 956);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 948) + 12))(FIELD_U32(a1, 948));
  }
  v3 = *(nn__util__BinaryFileHeader **)(a1 + 992);
  if ( v3 )
  {
    FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(v3);
    sub_6083B278(FirstBlock);
    FIELD_U32(a1, 992) = 0;
  }
  v5 = *(nn__util__BinaryFileHeader **)(a1 + 1028);
  if ( v5 )
  {
    v6 = nn__util__BinaryFileHeader__GetFirstBlock(v5);
    sub_6083B278(v6);
    FIELD_U32(a1, 1028) = 0;
  }
  sub_60888558(a1 + 1000, FIELD_U32(a1, 8), a1 + 944);
  sub_60888864(a1 + 1036, FIELD_U32(a1, 8), a1 + 944);
  FIELD_U32(a1, 64) = 0;
  if ( FIELD_U32(a1, 60) )
  {
    --FIELD_U32(a1, 956);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 948) + 12))(FIELD_U32(a1, 948));
    FIELD_U32(a1, 60) = 0;
  }
  if ( FIELD_U32(a1, 72) )
  {
    --FIELD_U32(a1, 956);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 948) + 12))(FIELD_U32(a1, 948));
    FIELD_U32(a1, 72) = 0;
  }
  v7 = FIELD_U32(a1, 80);
  if ( v7 )
  {
    sub_6086EFC4(v7, FIELD_U32(a1, 8));
    FIELD_U32(a1, 80) = 0;
  }
  v8 = *(_DWORD **)(a1 + 88);
  if ( FIELD_S32(a1, 84) >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v8[10] + 8 * v9);
      sub_6083D2EC(FIELD_U32(v10, 128));
      sub_6083D48C(FIELD_U32(v10, 136));
      v8 = *(_DWORD **)(a1 + 88);
      ++v9;
    }
    while ( v9 < FIELD_U32(a1, 84) );
  }
  if ( v8 )
  {
    v11 = v8[18];
    if ( v11 == v8[16] )
      sub_60836614(v11);
    v8[18] = 0;
    FIELD_U32(a1, 88) = 0;
  }
  if ( FIELD_S32(a1, 40) >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = FIELD_U32(a1, 48);
      if ( *(int *)(v13 + 32 * v12 + 4) >= 1 )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = *(_DWORD *)(v13 + 32 * v12 + 16) + v14;
          sub_6089DCB4(v16, FIELD_U32(a1, 8));
          sub_6089E2AC(v16, FIELD_U32(a1, 8));
          v13 = FIELD_U32(a1, 48);
          ++v15;
          v14 += 720;
        }
        while ( v15 < *(_DWORD *)(v13 + 32 * v12 + 4) );
      }
      v17 = *(_DWORD *)(v13 + 32 * v12 + 20);
      --FIELD_U32(a1, 956);
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 948) + 12))(FIELD_U32(a1, 948), v17);
      ++v12;
    }
    while ( v12 < FIELD_U32(a1, 40) );
  }
  if ( FIELD_U32(a1, 48) )
  {
    --FIELD_U32(a1, 956);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 948) + 12))(FIELD_U32(a1, 948));
    FIELD_U32(a1, 48) = 0;
  }
  if ( FIELD_U32(a1, 52) )
  {
    --FIELD_U32(a1, 956);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 948) + 12))(FIELD_U32(a1, 948));
    FIELD_U32(a1, 52) = 0;
  }
  if ( FIELD_U8(a1, 204) )
    sub_60896484(a1 + 128, FIELD_U32(a1, 8), a1 + 944);
  result = FIELD_U8(a1, 612);
  if ( FIELD_U8(a1, 612) )
    return sub_60896484(a1 + 536, FIELD_U32(a1, 8), a1 + 944);
  return result;
}
