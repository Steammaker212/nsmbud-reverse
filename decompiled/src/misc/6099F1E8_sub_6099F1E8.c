/* sub_6099F1E8
 * address: 0x6099F1E8   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099F1E8(sead_ListNode *a1, int a2)
{
  sead_ListNode *previous; // r0
  sead_ListNode *v5; // r8
  sead_ListNode *next; // r5
  sead_ListNode *v7; // r4
  sead_ListNode *v8; // r0
  int v9; // r4
  sead_ListNode *v10; // r0
  int v11; // r1
  int v12; // r2
  sead_ListNode *v13; // r3
  int v14; // r2
  sead_ListNode *v15; // r3
  sead_ListNode *v16; // r5
  sead_ListNode *v17; // r4
  sead_ListNode *v18; // r0
  int result; // r0
  unsigned int v20; // r10
  sead_ListNode *v21; // r6
  sead_ListNode *v22; // r7
  sead_ListNode *v23; // r1
  signed int v24; // r5
  bool v25; // cc
  sead_ListNode *v26; // r0
  __int16 *v27; // r7
  __int16 *v28; // r1
  signed int v29; // r5
  sead_ListNode *v30; // r0

  previous = FIELD_U32(a1 + (5) * 8, 0x0);
  v5 = a1 + 3;
  if ( previous )
  {
    next = FIELD_U32(a1 + (3) * 8, 0x4);
    if ( next == v5 )
      goto LABEL_5;
    do
    {
      v7 = FIELD_U32(next, 0x4);
      sead__ListNode__erase(next);
      --FIELD_U32(a1 + (4) * 8, 0x0);
      next[-20].previous = FIELD_U32(a1 + (4) * 8, 0x4);
      v8 = next - 20;
      next = v7;
      FIELD_U32(a1 + (4) * 8, 0x4) = v8;
    }
    while ( v7 != v5 );
    previous = FIELD_U32(a1 + (5) * 8, 0x0);
    if ( previous )
LABEL_5:
      operator_delete_8DE3FC(previous);
    FIELD_U32(a1 + (4) * 8, 0x4) = 0;
    FIELD_U32(a1 + (5) * 8, 0x0) = 0;
    FIELD_U32(a1 + (5) * 8, 0x4) = 0;
  }
  v9 = dword_60C60DD4;
  if ( dword_60C60DD4 >= 1 )
  {
    v10 = (sead_ListNode *)sub_608DE334(168 * dword_60C60DD4, a2, 4);
    if ( v10 )
    {
      v11 = v9 - 1;
      FIELD_U32(a1 + (4) * 8, 0x4) = v10;
      if ( v9 >= 2 )
      {
        v12 = 0;
        if ( (v11 & 1) != 0 )
        {
          FIELD_U32(v10, 0x0) = v10 + 21;
          v12 = 1;
        }
        if ( v9 != 2 )
        {
          v13 = &v10[21 * (__int16)v12];
          v14 = v11 - v12;
          v15 = v13 + 21;
          do
          {
            v15[-21].previous = v15;
            v14 -= 2;
            FIELD_U32(v15, 0x0) = v15 + 21;
            v15 += 42;
          }
          while ( v14 );
        }
      }
      v10[21 * v11].previous = 0;
      FIELD_U32(a1 + (5) * 8, 0x0) = v10;
      FIELD_U32(a1 + (5) * 8, 0x4) = (sead_ListNode *)v9;
    }
  }
  v16 = FIELD_U32(a1 + (3) * 8, 0x4);
  if ( v16 != v5 )
  {
    do
    {
      v17 = FIELD_U32(v16, 0x4);
      sead__ListNode__erase(v16);
      --FIELD_U32(a1 + (4) * 8, 0x0);
      v16[-20].previous = FIELD_U32(a1 + (4) * 8, 0x4);
      v18 = v16 - 20;
      v16 = v17;
      FIELD_U32(a1 + (4) * 8, 0x4) = v18;
    }
    while ( v17 != v5 );
  }
  result = dword_60C60DD4;
  if ( dword_60C60DD4 )
  {
    v20 = 0;
    do
    {
      v21 = 0;
      if ( (int)FIELD_U32(a1 + (4) * 8, 0x0) < (int)FIELD_U32(a1 + (5) * 8, 0x4) )
      {
        v21 = FIELD_U32(a1 + (4) * 8, 0x4);
        if ( v21 )
          FIELD_U32(a1 + (4) * 8, 0x4) = FIELD_U32(v21, 0x0);
        else
          v21 = 0;
        FIELD_U32(v21, 0x0) = (sead_ListNode *)&BufferedSafeStringBase_char_vtable_probably;
        FIELD_U32(v21, 0x4) = (sead_ListNode *)((char *)v21 + 12);
        FIELD_U32(v21 + (1) * 8, 0x0) = (sead_ListNode *)8;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v21);
        LOBYTE(FIELD_U32(v21, 0x4)) = 0;
        FIELD_U32(v21, 0x0) = (sead_ListNode *)&off_60BD4B8C;
        FIELD_U32(v21 + (3) * 8, 0x0) = v21 + 4;
        FIELD_U32(v21 + (2) * 8, 0x4) = (sead_ListNode *)&BufferedSafeStringBase_char_vtable_probably;
        FIELD_U32(v21 + (3) * 8, 0x4) = (sead_ListNode *)128;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&FIELD_U32(v21 + (2) * 8, 0x4));
        LOBYTE(v21[3].FIELD_U32(previous, 0x0)) = 0;
        FIELD_U32(v21 + (2) * 8, 0x4) = (sead_ListNode *)&off_60BD95A8;
        FIELD_U32(v21 + (20) * 8, 0x0) = 0;
        FIELD_U32(v21 + (20) * 8, 0x4) = 0;
        sead__ListNode__insertFront(a1 + 3, v21 + 20);
        ++FIELD_U32(a1 + (4) * 8, 0x0);
      }
      v22 = FIELD_U32(v21, 0x4);
      v23 = *(sead_ListNode **)&off_60C60DB8[4 * v20];
      if ( v22 != v23 )
      {
        v24 = 0;
        while ( *((_BYTE *)&FIELD_U32(v23, 0x0) + v24) )
        {
          if ( !*((_BYTE *)&FIELD_U32(v23, 0x0) + v24 + 1) )
          {
            ++v24;
            break;
          }
          if ( !*((_BYTE *)&FIELD_U32(v23, 0x0) + v24 + 2) )
          {
            v24 += 2;
            break;
          }
          v25 = v24 + 2 <= 0x7FFFF;
          v24 += 3;
          if ( !v25 )
          {
            v24 = 0;
            break;
          }
        }
        v26 = FIELD_U32(v21 + (1) * 8, 0x0);
        if ( v24 >= (int)v26 )
          v24 = (signed int)&v26[-1].next + 3;
        qmemcpy(FIELD_U32(v21, 0x4), v23, v24);
        *((_BYTE *)&FIELD_U32(v22, 0x0) + v24) = 0;
      }
      v27 = (__int16 *)FIELD_U32(v21 + (3) * 8, 0x0);
      v28 = off_60C60DD0[v20];
      if ( v27 != v28 )
      {
        v29 = 0;
        while ( *((_BYTE *)v28 + v29) )
        {
          if ( !*((_BYTE *)v28 + v29 + 1) )
          {
            ++v29;
            break;
          }
          if ( !*((_BYTE *)v28 + v29 + 2) )
          {
            v29 += 2;
            break;
          }
          v25 = v29 + 2 <= 0x7FFFF;
          v29 += 3;
          if ( !v25 )
          {
            v29 = 0;
            break;
          }
        }
        v30 = FIELD_U32(v21 + (3) * 8, 0x4);
        if ( v29 >= (int)v30 )
          v29 = (signed int)&v30[-1].next + 3;
        qmemcpy(FIELD_U32(v21 + (3) * 8, 0x0), v28, v29);
        *((_BYTE *)v27 + v29) = 0;
      }
      ++v20;
      result = dword_60C60DD4;
    }
    while ( v20 < dword_60C60DD4 );
  }
  return result;
}
