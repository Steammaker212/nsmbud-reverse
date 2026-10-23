/* sub_6099F9D0
 * address: 0x6099F9D0   size: 2060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_6099F9D0(sead_ListNode *a1, int a2, int a3)
{
  sead_ListNode *v3; // r8
  int v4; // r6
  sead_ListNode *previous; // r0
  sead_ListNode *v7; // r9
  int v8; // r4
  sead_ListNode *v9; // r0
  int v10; // r1
  int v11; // r2
  sead_ListNode *v12; // r3
  int v13; // r2
  sead_ListNode *v14; // r3
  sead_ListNode *next; // r11
  sead_ListNode *v16; // r7
  sead_ListNode *v17; // r6
  int (**v18)(); // r5
  sead_ListNode *v19; // r4
  sead_ListNode *v20; // r8
  sead_ListNode *v21; // r0
  signed int v22; // r5
  bool v23; // cc
  sead_ListNode *v24; // r0
  sead_ListNode *v25; // r4
  sead_ListNode *v26; // r8
  sead_ListNode *v27; // r0
  signed int v28; // r7
  sead_ListNode *v29; // r0
  sead_ListNode *v30; // r0
  sead_ListNode *v31; // r6
  int v32; // r9
  sead_ListNode *v33; // r4
  sead_ListNode *v34; // r5
  sead_ListNode *v35; // r0
  sead_ListNode *v36; // r0
  int v37; // r1
  int v38; // r2
  sead_ListNode *v39; // r3
  int v40; // r2
  sead_ListNode *v41; // r3
  sead_ListNode *v42; // r9
  sead_ListNode *v43; // r7
  sead_ListNode *v44; // r0
  sead_ListNode *v45; // r6
  int (**v46)(); // r5
  sead_ListNode *v47; // r4
  sead_ListNode *v48; // r8
  sead_ListNode *v49; // r0
  signed int v50; // r5
  sead_ListNode *v51; // r0
  sead_ListNode *v52; // r4
  sead_ListNode *v53; // r8
  sead_ListNode *v54; // r0
  signed int v55; // r7
  sead_ListNode *v56; // r0
  void *v57; // r0
  sead_ListNode *v58; // r4
  sead_ListNode *v59; // r5
  sead_ListNode *v60; // r0
  sead_ListNode *v61; // r0
  int v62; // r1
  int v63; // r2
  sead_ListNode *v64; // r3
  int v65; // r2
  sead_ListNode *v66; // r3
  int v68; // [sp+4h] [bp-5Ch]
  int v69; // [sp+8h] [bp-58h]
  int (**v70)(); // [sp+Ch] [bp-54h]
  int (**v71)(); // [sp+10h] [bp-50h]
  int (**v72)(); // [sp+14h] [bp-4Ch]
  sead_ListNode *v73; // [sp+18h] [bp-48h]
  sead_ListNode *v74; // [sp+1Ch] [bp-44h]
  sead_ListNode *v75; // [sp+20h] [bp-40h]
  sead_ListNode v76; // [sp+24h] [bp-3Ch] BYREF
  int v77; // [sp+2Ch] [bp-34h]
  sead_ListNode *v78; // [sp+30h] [bp-30h]
  void *v79; // [sp+34h] [bp-2Ch]
  int v80; // [sp+38h] [bp-28h]

  v3 = a1;
  v4 = a3;
  previous = a1[5].previous;
  v7 = v3 + 3;
  if ( !a3 )
    v4 = (int)v3[6].previous;
  if ( previous )
  {
    v8 = (int)v3[4].previous;
    if ( v8 < a2 )
    {
      v77 = 0;
      v76.next = &v76;
      v76.previous = &v76;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      if ( v8 >= 1 )
      {
        v9 = (sead_ListNode *)sub_608DE334(168 * v8, v4, -4);
        if ( v9 )
        {
          v10 = v8 - 1;
          v78 = v9;
          if ( v8 >= 2 )
          {
            v11 = 0;
            if ( (v10 & 1) != 0 )
            {
              FIELD_U32(v9, 0x0) = v9 + 21;
              v11 = 1;
            }
            if ( v8 != 2 )
            {
              v12 = &v9[21 * (__int16)v11];
              v13 = v10 - v11;
              v14 = v12 + 21;
              do
              {
                v14[-21].previous = v14;
                v13 -= 2;
                FIELD_U32(v14, 0x0) = v14 + 21;
                v14 += 42;
              }
              while ( v13 );
            }
          }
          v9[21 * v10].previous = 0;
          v79 = v9;
          v80 = v8;
        }
      }
      v68 = v4;
      v69 = a2;
      next = v3[3].next;
      v74 = v3 + 3;
      v75 = v3;
      if ( next != v7 )
      {
        v16 = next - 20;
        v73 = v74 - 20;
        v72 = &BufferedSafeStringBase_char_vtable_probably;
        v71 = &off_60BD4B8C;
        v70 = &off_60BD95A8;
        do
        {
          v17 = 0;
          if ( v77 < v80 )
          {
            v17 = v78;
            if ( v78 )
              v78 = FIELD_U32(v78, 0x0);
            else
              v17 = 0;
            v18 = v72;
            FIELD_U32(v17, 0x0) = (sead_ListNode *)v72;
            FIELD_U32(v17, 0x4) = (sead_ListNode *)((char *)v17 + 12);
            v17[1].previous = (sead_ListNode *)8;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v17);
            LOBYTE(FIELD_U32(v17, 0x4)) = 0;
            FIELD_U32(v17, 0x0) = (sead_ListNode *)v71;
            v17[3].previous = v17 + 4;
            v17[2].next = (sead_ListNode *)v18;
            v17[3].next = (sead_ListNode *)128;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17[2].next);
            LOBYTE(v17[3].FIELD_U32(previous, 0x0)) = 0;
            v17[2].next = (sead_ListNode *)v70;
            v17[20].previous = 0;
            v17[20].next = 0;
            sead__ListNode__insertFront(&v76, v17 + 20);
            ++v77;
          }
          v19 = FIELD_U32(v17, 0x4);
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v16, 0x0)[1].next)(v16);
          v20 = FIELD_U32(v16, 0x4);
          if ( v19 != v20 )
          {
            ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v16, 0x0)[1].next)(v16);
            v21 = FIELD_U32(v16, 0x4);
            v22 = 0;
            while ( *((_BYTE *)&FIELD_U32(v21, 0x0) + v22) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v21, 0x0) + v22 + 1) )
              {
                ++v22;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v21, 0x0) + v22 + 2) )
              {
                v22 += 2;
                break;
              }
              v23 = v22 + 2 <= 0x7FFFF;
              v22 += 3;
              if ( !v23 )
              {
                v22 = 0;
                break;
              }
            }
            v24 = v17[1].previous;
            if ( v22 >= (int)v24 )
              v22 = (signed int)&v24[-1].next + 3;
            qmemcpy(v19, v20, v22);
            *((_BYTE *)&FIELD_U32(v19, 0x0) + v22) = 0;
          }
          v25 = v17[3].previous;
          ((void (__fastcall *)(sead_ListNode **))v16[2].next[1].next)(&v16[2].next);
          v26 = v16[3].previous;
          if ( v25 != v26 )
          {
            ((void (__fastcall *)(sead_ListNode **))v16[2].next[1].next)(&v16[2].next);
            v27 = v16[3].previous;
            v28 = 0;
            while ( *((_BYTE *)&FIELD_U32(v27, 0x0) + v28) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v27, 0x0) + v28 + 1) )
              {
                ++v28;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v27, 0x0) + v28 + 2) )
              {
                v28 += 2;
                break;
              }
              v23 = v28 + 2 <= 0x7FFFF;
              v28 += 3;
              if ( !v23 )
              {
                v28 = 0;
                break;
              }
            }
            v29 = v17[3].next;
            if ( v28 >= (int)v29 )
              v28 = (signed int)&v29[-1].next + 3;
            qmemcpy(v25, v26, v28);
            *((_BYTE *)&FIELD_U32(v25, 0x0) + v28) = 0;
          }
          next = FIELD_U32(next, 0x4);
          v3 = v75;
          v16 = next - 20;
        }
        while ( &next[-20] != v73 );
      }
      v30 = v3[5].previous;
      v31 = v74;
      v32 = v69;
      if ( v30 )
      {
        v33 = v3[3].next;
        if ( v33 == v74 )
          goto LABEL_50;
        do
        {
          v34 = FIELD_U32(v33, 0x4);
          sead__ListNode__erase(v33);
          --v3[4].previous;
          v33[-20].previous = v3[4].next;
          v35 = v33 - 20;
          v33 = v34;
          v3[4].next = v35;
        }
        while ( v34 != v31 );
        v30 = v3[5].previous;
        if ( v30 )
LABEL_50:
          operator_delete_8DE3FC(v30);
        v3[4].next = 0;
        v3[5].previous = 0;
        v3[5].next = 0;
      }
      if ( v32 >= 1 )
      {
        v36 = (sead_ListNode *)sub_608DE334(168 * v32, v68, 4);
        if ( v36 )
        {
          v37 = v32 - 1;
          v3[4].next = v36;
          if ( v32 >= 2 )
          {
            v38 = 0;
            if ( (v37 & 1) != 0 )
            {
              FIELD_U32(v36, 0x0) = v36 + 21;
              v38 = 1;
            }
            if ( v32 != 2 )
            {
              v39 = &v36[21 * (__int16)v38];
              v40 = v37 - v38;
              v41 = v39 + 21;
              do
              {
                v41[-21].previous = v41;
                v40 -= 2;
                FIELD_U32(v41, 0x0) = v41 + 21;
                v41 += 42;
              }
              while ( v40 );
            }
          }
          v36[21 * v37].previous = 0;
          v3[5].previous = v36;
          v3[5].next = (sead_ListNode *)v32;
        }
      }
      v42 = v76.next;
      if ( v76.next != &v76 )
      {
        v43 = v76.next - 20;
        v73 = &v76 - 20;
        v72 = &BufferedSafeStringBase_char_vtable_probably;
        v71 = &off_60BD4B8C;
        v70 = &off_60BD95A8;
        do
        {
          v44 = v3[4].next;
          v45 = 0;
          if ( v44 )
          {
            v45 = v3[4].next;
            v3[4].next = FIELD_U32(v44, 0x0);
          }
          v46 = v72;
          FIELD_U32(v45, 0x0) = (sead_ListNode *)v72;
          FIELD_U32(v45, 0x4) = (sead_ListNode *)((char *)v45 + 12);
          v45[1].previous = (sead_ListNode *)8;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v45);
          LOBYTE(FIELD_U32(v45, 0x4)) = 0;
          FIELD_U32(v45, 0x0) = (sead_ListNode *)v71;
          v45[3].previous = v45 + 4;
          v45[2].next = (sead_ListNode *)v46;
          v45[3].next = (sead_ListNode *)128;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v45[2].next);
          LOBYTE(v45[3].FIELD_U32(previous, 0x0)) = 0;
          v45[2].next = (sead_ListNode *)v70;
          v45[20].previous = 0;
          v45[20].next = 0;
          sead__ListNode__insertFront(v74, v45 + 20);
          ++v3[4].previous;
          v47 = FIELD_U32(v45, 0x4);
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v43, 0x0)[1].next)(v43);
          v48 = FIELD_U32(v43, 0x4);
          if ( v47 != v48 )
          {
            ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v43, 0x0)[1].next)(v43);
            v49 = FIELD_U32(v43, 0x4);
            v50 = 0;
            while ( *((_BYTE *)&FIELD_U32(v49, 0x0) + v50) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v49, 0x0) + v50 + 1) )
              {
                ++v50;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v49, 0x0) + v50 + 2) )
              {
                v50 += 2;
                break;
              }
              v23 = v50 + 2 <= 0x7FFFF;
              v50 += 3;
              if ( !v23 )
              {
                v50 = 0;
                break;
              }
            }
            v51 = v45[1].previous;
            if ( v50 >= (int)v51 )
              v50 = (signed int)&v51[-1].next + 3;
            qmemcpy(v47, v48, v50);
            *((_BYTE *)&FIELD_U32(v47, 0x0) + v50) = 0;
          }
          v52 = v45[3].previous;
          ((void (__fastcall *)(sead_ListNode **))v43[2].next[1].next)(&v43[2].next);
          v53 = v43[3].previous;
          if ( v52 != v53 )
          {
            ((void (__fastcall *)(sead_ListNode **))v43[2].next[1].next)(&v43[2].next);
            v54 = v43[3].previous;
            v55 = 0;
            while ( *((_BYTE *)&FIELD_U32(v54, 0x0) + v55) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v54, 0x0) + v55 + 1) )
              {
                ++v55;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v54, 0x0) + v55 + 2) )
              {
                v55 += 2;
                break;
              }
              v23 = v55 + 2 <= 0x7FFFF;
              v55 += 3;
              if ( !v23 )
              {
                v55 = 0;
                break;
              }
            }
            v56 = v45[3].next;
            if ( v55 >= (int)v56 )
              v55 = (signed int)&v56[-1].next + 3;
            qmemcpy(v52, v53, v55);
            *((_BYTE *)&FIELD_U32(v52, 0x0) + v55) = 0;
          }
          v42 = FIELD_U32(v42, 0x4);
          v3 = v75;
          v43 = v42 - 20;
        }
        while ( &v42[-20] != v73 );
      }
      v57 = v79;
      v7 = v74;
      if ( v79 )
      {
        v58 = v76.next;
        if ( v76.next == &v76 )
          goto LABEL_94;
        do
        {
          v59 = FIELD_U32(v58, 0x4);
          sead__ListNode__erase(v58);
          --v77;
          v58[-20].previous = v78;
          v60 = v58 - 20;
          v58 = v59;
          v78 = v60;
        }
        while ( v59 != &v76 );
        v57 = v79;
        if ( v79 )
LABEL_94:
          operator_delete_8DE3FC(v57);
        v80 = 0;
        v78 = 0;
        v79 = 0;
      }
    }
  }
  else if ( a2 >= 1 )
  {
    v61 = (sead_ListNode *)sub_608DE334(168 * a2, v4, 4);
    if ( v61 )
    {
      v62 = a2 - 1;
      v3[4].next = v61;
      if ( a2 >= 2 )
      {
        v63 = 0;
        if ( (v62 & 1) != 0 )
        {
          FIELD_U32(v61, 0x0) = v61 + 21;
          v63 = 1;
        }
        if ( a2 != 2 )
        {
          v64 = &v61[21 * (__int16)v63];
          v65 = v62 - v63;
          v66 = v64 + 21;
          do
          {
            v66[-21].previous = v66;
            v65 -= 2;
            FIELD_U32(v66, 0x0) = v66 + 21;
            v66 += 42;
          }
          while ( v65 );
        }
      }
      v61[21 * v62].previous = 0;
      v3[5].previous = v61;
      v3[5].next = (sead_ListNode *)a2;
    }
  }
  return v7;
}
