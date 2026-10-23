/* sub_609A5D84
 * address: 0x609A5D84   size: 1516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_609A5D84(sead_ListNode *a1, int a2, int a3)
{
  signed int v5; // r4
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r6
  _DWORD *v9; // r7
  int v10; // r6
  _DWORD *v11; // r2
  _DWORD *v12; // r7
  sead_ListNode *next; // r9
  sead_ListNode *v14; // r4
  _DWORD *v15; // r7
  sead_ListNode *v16; // r5
  sead_ListNode *v17; // r11
  sead_ListNode *v18; // r0
  signed int v19; // r8
  bool v20; // cc
  signed int v21; // r0
  sead_ListNode *v22; // r11
  sead_ListNode *v23; // r8
  sead_ListNode *v24; // r0
  signed int v25; // r4
  signed int v26; // r0
  sead_ListNode *v27; // r0
  int v28; // r1
  int v29; // r3
  int v30; // r2
  sead_ListNode *v31; // r3
  _DWORD **v32; // r6
  int v33; // r7
  int v34; // r0
  sead_ListNode *v35; // r4
  _DWORD *v36; // r5
  sead_ListNode *v37; // r4
  _DWORD *v38; // r0
  int v39; // r1
  _DWORD *v40; // r2
  sead_ListNode *v41; // r0
  int v42; // r1
  int v43; // r3
  int v44; // r2
  sead_ListNode *v45; // r3
  sead_ListNode *v48; // [sp+8h] [bp-50h]
  int previous; // [sp+14h] [bp-44h]
  sead_ListNode *v50; // [sp+18h] [bp-40h]
  int v51; // [sp+20h] [bp-38h] BYREF
  int v52; // [sp+24h] [bp-34h]
  _DWORD **v53; // [sp+28h] [bp-30h]
  _DWORD *v54; // [sp+2Ch] [bp-2Ch]
  void *v55; // [sp+30h] [bp-28h]

  previous = a3;
  if ( !a3 )
    previous = (int)a1[17].previous;
  v50 = a1 + 14;
  if ( a1[16].previous )
  {
    v5 = (signed int)a1[15].previous;
    if ( v5 < a2 )
    {
      v55 = 0;
      v54 = 0;
      v53 = 0;
      v52 = 0;
      v51 = 0;
      if ( v5 >= 1 )
      {
        v6 = (_DWORD *)sub_608DE334(2076 * v5, previous, -4);
        if ( v6 )
        {
          v7 = v5 - 1;
          v54 = v6;
          if ( v5 >= 2 )
          {
            v8 = 0;
            if ( (v7 & 1) != 0 )
            {
              v8 = 1;
              *v6 = v6 + 518;
            }
            if ( v5 != 2 )
            {
              v9 = &v6[518 * (__int16)v8];
              v10 = v7 - v8;
              v11 = v9 + 518;
              v12 = v9 + 1036;
              do
              {
                *(v11 - 518) = v11;
                *v11 = v12;
                v11 += 1036;
                v12 += 1036;
                v10 -= 2;
              }
              while ( v10 );
            }
          }
          v6[518 * v7] = 0;
          v55 = v6;
          sub_608DEB0C(&v51, v5, (int)&v6[518 * v5]);
        }
      }
      v48 = a1;
      next = a1[14].next;
      if ( next != v50 )
      {
        v14 = next - 3;
        do
        {
          v15 = 0;
          if ( v51 < v52 )
          {
            v15 = v54;
            if ( v54 )
              v54 = (_DWORD *)*v54;
            else
              v15 = 0;
            memset(v15 + 3, 0, 2060);
            *v15 = &BufferedSafeStringBase_char_vtable_probably;
            v15[1] = v15 + 3;
            v15[2] = 1024;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v15);
            *(_BYTE *)v15[1] = 0;
            *v15 = &off_60BFA9DC;
            v15[260] = v15 + 262;
            v15[259] = &BufferedSafeStringBase_char_vtable_probably;
            v15[261] = 1024;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v15 + 259));
            *(_BYTE *)v15[260] = 0;
            v15[259] = &off_60BFA9DC;
            if ( v51 < v52 )
              v53[v51++] = v15;
          }
          v16 = (sead_ListNode *)v15[1];
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v14, 0x0)[1].next)(v14);
          v17 = FIELD_U32(v14, 0x4);
          if ( v16 != v17 )
          {
            ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v14, 0x0)[1].next)(v14);
            v18 = FIELD_U32(v14, 0x4);
            v19 = 0;
            while ( *((_BYTE *)&FIELD_U32(v18, 0x0) + v19) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v18, 0x0) + v19 + 1) )
              {
                ++v19;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v18, 0x0) + v19 + 2) )
              {
                v19 += 2;
                break;
              }
              v20 = v19 + 2 <= 0x7FFFF;
              v19 += 3;
              if ( !v20 )
              {
                v19 = 0;
                break;
              }
            }
            v21 = v15[2];
            if ( v19 >= v21 )
              v19 = v21 - 1;
            qmemcpy(v16, v17, v19);
            *((_BYTE *)&FIELD_U32(v16, 0x0) + v19) = 0;
          }
          v22 = (sead_ListNode *)v15[260];
          ((void (__fastcall *)(sead_ListNode **))v14[1].next[1].next)(&v14[1].next);
          v23 = v14[2].previous;
          if ( v22 != v23 )
          {
            ((void (__fastcall *)(sead_ListNode **))v14[1].next[1].next)(&v14[1].next);
            v24 = v14[2].previous;
            v25 = 0;
            while ( *((_BYTE *)&FIELD_U32(v24, 0x0) + v25) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v24, 0x0) + v25 + 1) )
              {
                ++v25;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v24, 0x0) + v25 + 2) )
              {
                v25 += 2;
                break;
              }
              v20 = v25 + 2 <= 0x7FFFF;
              v25 += 3;
              if ( !v20 )
              {
                v25 = 0;
                break;
              }
            }
            v26 = v15[261];
            if ( v25 >= v26 )
              v25 = v26 - 1;
            qmemcpy(v22, v23, v25);
            *((_BYTE *)&FIELD_U32(v22, 0x0) + v25) = 0;
          }
          next = FIELD_U32(next, 0x4);
          v14 = next - 3;
        }
        while ( &next[-3] != &v50[-3] );
      }
      sub_609A5B14(v50);
      if ( a2 >= 1 )
      {
        v27 = (sead_ListNode *)sub_608DE334(32 * a2, previous, 4);
        if ( v27 )
        {
          v28 = a2 - 1;
          v48[15].next = v27;
          if ( a2 >= 2 )
          {
            v29 = 0;
            if ( (v28 & 1) != 0 )
            {
              v29 = 1;
              FIELD_U32(v27, 0x0) = v27 + 4;
            }
            if ( a2 != 2 )
            {
              v30 = v28 - v29;
              v31 = &v27[4 * v29 + 4];
              do
              {
                v31[-4].previous = v31;
                v30 -= 2;
                FIELD_U32(v31, 0x0) = v31 + 4;
                v31 += 8;
              }
              while ( v30 );
            }
          }
          v27[4 * v28].previous = 0;
          v48[16].previous = v27;
          v48[16].next = (sead_ListNode *)a2;
        }
      }
      v32 = v53;
      if ( v51 )
      {
        v33 = 4 * v51;
        v34 = (int)v48[15].previous;
        do
        {
          if ( v34 < (int)v48[16].next )
          {
            v35 = v48[15].next;
            v36 = *v32;
            if ( v35 )
              v48[15].next = FIELD_U32(v35, 0x0);
            else
              v35 = 0;
            sub_6097114C(v35, previous, v36, 4);
            sub_6097114C(&v35[1].next, previous, v36 + 259, 4);
            v35[3].previous = 0;
            v37 = v35 + 3;
            FIELD_U32(v37, 0x4) = 0;
            sead__ListNode__insertFront(v50, v37);
            v34 = (int)&v48[15].FIELD_U32(previous, 0x0) + 1;
            v48[15].previous = (sead_ListNode *)v34;
          }
          v33 -= 4;
          ++v32;
        }
        while ( v33 );
        v32 = v53;
      }
      if ( v32 )
      {
        if ( v51 >= 1 )
        {
          v38 = *v32;
          *v38 = v54;
          v54 = v38;
          if ( v51 >= 2 )
          {
            v39 = 1;
            do
            {
              v40 = v53[v39++];
              *v40 = v38;
              v54 = v40;
              v38 = v40;
            }
            while ( v39 < v51 );
          }
        }
        v51 = 0;
        if ( v55 )
          operator_delete_8DE3FC(v55);
        v55 = 0;
        v54 = 0;
        v53 = 0;
        v52 = 0;
      }
    }
  }
  else if ( a2 >= 1 )
  {
    v41 = (sead_ListNode *)sub_608DE334(32 * a2, previous, 4);
    if ( v41 )
    {
      v42 = a2 - 1;
      a1[15].next = v41;
      if ( a2 >= 2 )
      {
        v43 = 0;
        if ( (v42 & 1) != 0 )
        {
          v43 = 1;
          FIELD_U32(v41, 0x0) = v41 + 4;
        }
        if ( a2 != 2 )
        {
          v44 = v42 - v43;
          v45 = &v41[4 * v43 + 4];
          do
          {
            v45[-4].previous = v45;
            v44 -= 2;
            FIELD_U32(v45, 0x0) = v45 + 4;
            v45 += 8;
          }
          while ( v44 );
        }
      }
      v41[4 * v42].previous = 0;
      a1[16].previous = v41;
      a1[16].next = (sead_ListNode *)a2;
    }
  }
  return v50;
}
