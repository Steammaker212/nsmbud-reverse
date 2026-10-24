/* sub_609A1624
 * address: 0x609A1624   size: 2208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A1624(sead_ListNode *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r1
  sead_ListNode *v8; // r0
  int (***v9)(); // r5
  int v10; // r4
  int v11; // r7
  sead_ListNode *v12; // r11
  sead_ListNode *v13; // r8
  int (***v14)(); // r11
  int j; // r4
  int v16; // r5
  int v17; // r7
  int v18; // r4
  int v19; // r11
  int v20; // r2
  int v21; // r7
  bool v22; // zf
  int v23; // r8
  sead_ListNode *v24; // r4
  int v25; // r5
  int v26; // r0
  int v27; // r7
  int v28; // r2
  sead_ListNode *next; // r5
  sead_ListNode *v30; // r4
  int v31; // r11
  sead_ListNode *v32; // r10
  signed int v33; // r4
  int v34; // r2
  signed int previous; // r0
  int v36; // r4
  sead_ListNode *v37; // r7
  sead_ListNode *v38; // r10
  signed int v39; // r4
  int v40; // r2
  signed int v41; // r0
  int v42; // r10
  int v43; // r4
  int i; // r4
  int v45; // r5
  int v46; // r7
  int v47; // r4
  sead_ListNode *v48; // r7
  int v49; // r5
  int v50; // r0
  sead_ListNode *v52; // [sp+8h] [bp-F8h]
  sead_ListNode *v53; // [sp+10h] [bp-F0h]
  int v54; // [sp+10h] [bp-F0h]
  sead_ListNode *v55; // [sp+14h] [bp-ECh]
  sead_ListNode *v56; // [sp+18h] [bp-E8h]
  sead_ListNode *v57; // [sp+24h] [bp-DCh]
  int v58; // [sp+2Ch] [bp-D4h]
  sead_ListNode *v59; // [sp+38h] [bp-C8h]
  int (**v60)(); // [sp+60h] [bp-A0h] BYREF
  sead_ListNode *v61; // [sp+64h] [bp-9Ch]
  int v62; // [sp+68h] [bp-98h]
  int v63; // [sp+6Ch] [bp-94h] BYREF
  int (**v64)(); // [sp+ECh] [bp-14h] BYREF
  sead_ListNode *v65; // [sp+F0h] [bp-10h]
  int v66; // [sp+F4h] [bp-Ch]
  int v67; // [sp+F8h] [bp-8h] BYREF
  unsigned __int8 v68; // [sp+103h] [bp+3h] BYREF

  v68 = 0;
  v6 = sub_6090552C(a2, (int)&v68, 1);
  v7 = -1;
  if ( !v6 )
    return v7;
  v8 = a1 + 3;
  v58 = a3;
  v9 = &v60;
  v59 = a1;
  v10 = 0;
  v11 = 0;
  v57 = v8;
  v12 = (sead_ListNode *)&v63;
  while ( 2 )
  {
    v42 = v10++;
    switch ( v11 )
    {
      case 0:
        v11 = v68 == 60;
        goto LABEL_114;
      case 1:
        v11 = 2;
        if ( v68 == 33 )
          goto LABEL_114;
        if ( v68 != 63 )
          return v42 - 1;
        v43 = 0;
        LOBYTE(v60) = 0;
        do
        {
          if ( !sub_6090552C(a2, (int)v9, 1) )
            return -1;
          --v43;
        }
        while ( (unsigned __int8)v60 != 63 );
        if ( !v43 || sub_60905340(a2) != 62 )
          return -1;
        v10 = v42 + 2 - v43;
        goto LABEL_111;
      case 2:
        if ( v68 == 45 )
        {
          if ( sub_60905340(a2) != 45 )
            return -1;
          v10 = v42 + 2;
          v11 = 3;
          goto LABEL_114;
        }
        if ( v68 != 68 )
        {
          v11 = 2;
          if ( v68 == 69 )
          {
            for ( i = 0; aNtity[i]; i += 2 )
            {
              if ( i > 0x7FFFF )
                goto LABEL_99;
              if ( !aNtity[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= 1 )
            {
              v45 = 0;
              do
              {
                v46 = (unsigned __int8)aNtity[v45];
                if ( sub_60905340(a2) != v46 )
                  return -1;
              }
              while ( ++v45 < i );
            }
LABEL_99:
            v56 = v12;
            v65 = (sead_ListNode *)&v67;
            v64 = &BufferedSafeStringBase_char_vtable_probably;
            v66 = 8;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v64);
            LOBYTE(FIELD_U32(v65, 0x0)) = 0;
            v64 = &off_60BD4B8C;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v64);
            v47 = v66;
            if ( v66 < 1 )
              return -1;
            v48 = v65;
            v49 = 0;
            while ( 1 )
            {
              v50 = sub_60905340(a2);
              *((_BYTE *)&FIELD_U32(v48, 0x0) + v49) = v50;
              if ( v50 == 32 )
                break;
              if ( ++v49 >= v47 )
                return -1;
            }
            *((_BYTE *)&FIELD_U32(v48, 0x0) + v49) = 0;
            ((void (__fastcall *)(int (***)()))v64[3])(&v64);
            v19 = 0;
            while ( *((_BYTE *)&FIELD_U32(v65, 0x0) + v19) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v65, 0x0) + v19 + 1) )
              {
                ++v19;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v65, 0x0) + v19 + 2) )
              {
                v19 += 2;
                break;
              }
              v20 = v19 + 2;
              v19 += 3;
              if ( v20 > 0x7FFFF )
              {
                v19 = 0;
                break;
              }
            }
            if ( !sub_6090552C(a2, (int)&v68, 1) )
              return -1;
            v21 = v68;
            v22 = v68 == 39;
            if ( v68 != 39 )
              v22 = v68 == 34;
            if ( !v22 )
              return -1;
            v61 = v56;
            v60 = &BufferedSafeStringBase_char_vtable_probably;
            v62 = 128;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v60);
            LOBYTE(FIELD_U32(v61, 0x0)) = 0;
            v60 = &off_60BD95A8;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v60);
            v23 = v62;
            if ( v62 < 1 )
              return -1;
            v24 = v61;
            v25 = 0;
            while ( 1 )
            {
              v26 = sub_60905340(a2);
              *((_BYTE *)&FIELD_U32(v24, 0x0) + v25) = v26;
              if ( v26 == v21 )
                break;
              if ( ++v25 >= v23 )
                return -1;
            }
            *((_BYTE *)&FIELD_U32(v24, 0x0) + v25) = 0;
            ((void (__fastcall *)(int (***)()))v60[3])(&v60);
            v27 = 0;
            while ( *((_BYTE *)&FIELD_U32(v61, 0x0) + v27) )
            {
              if ( !*((_BYTE *)&FIELD_U32(v61, 0x0) + v27 + 1) )
              {
                ++v27;
                break;
              }
              if ( !*((_BYTE *)&FIELD_U32(v61, 0x0) + v27 + 2) )
              {
                v27 += 2;
                break;
              }
              v28 = v27 + 2;
              v27 += 3;
              if ( v28 > 0x7FFFF )
              {
                v27 = 0;
                break;
              }
            }
            if ( sub_609A485C(v59, v24, v62, 0) != 1 || sub_609A4BE0(v59, v24, v62, 0) != 1 )
              return -1;
            sub_6099F9D0(v59, (int)&v59[4].FIELD_U32(previous, 0x0) + 1, v58);
            next = 0;
            if ( (int)FIELD_U32(v59 + (4) * 8, 0x0) < (int)FIELD_U32(v59 + (5) * 8, 0x4) )
            {
              next = FIELD_U32(v59 + (4) * 8, 0x4);
              if ( next )
                FIELD_U32(v59 + (4) * 8, 0x4) = FIELD_U32(next, 0x0);
              else
                next = 0;
              FIELD_U32(next, 0x0) = (sead_ListNode *)&BufferedSafeStringBase_char_vtable_probably;
              FIELD_U32(next, 0x4) = (sead_ListNode *)((char *)next + 12);
              FIELD_U32(next + (1) * 8, 0x0) = (sead_ListNode *)8;
              sead__BufferedSafeStringBase__assureTerminationImpl_const((int)next);
              LOBYTE(FIELD_U32(next, 0x4)) = 0;
              FIELD_U32(next, 0x0) = (sead_ListNode *)&off_60BD4B8C;
              FIELD_U32(next + (3) * 8, 0x0) = next + 4;
              FIELD_U32(next + (2) * 8, 0x4) = (sead_ListNode *)&BufferedSafeStringBase_char_vtable_probably;
              FIELD_U32(next + (3) * 8, 0x4) = (sead_ListNode *)128;
              sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&FIELD_U32(next + (2) * 8, 0x4));
              LOBYTE(next[3].FIELD_U32(previous, 0x0)) = 0;
              FIELD_U32(next + (2) * 8, 0x4) = (sead_ListNode *)&off_60BD95A8;
              FIELD_U32(next + (20) * 8, 0x0) = 0;
              FIELD_U32(next + (20) * 8, 0x4) = 0;
              sead__ListNode__insertFront(v57, next + 20);
              ++FIELD_U32(v59 + (4) * 8, 0x0);
            }
            v30 = FIELD_U32(next, 0x4);
            v31 = v42 + v19;
            ((void (__fastcall *)(int (***)()))v64[3])(&v64);
            v32 = next;
            v9 = &v60;
            v53 = v30;
            v55 = v32;
            if ( v30 != v65 )
            {
              v52 = v65;
              ((void (__fastcall *)(int (***)()))v64[3])(&v64);
              v33 = 0;
              while ( *((_BYTE *)&FIELD_U32(v65, 0x0) + v33) )
              {
                if ( !*((_BYTE *)&FIELD_U32(v65, 0x0) + v33 + 1) )
                {
                  ++v33;
                  break;
                }
                if ( !*((_BYTE *)&FIELD_U32(v65, 0x0) + v33 + 2) )
                {
                  v33 += 2;
                  break;
                }
                v34 = v33 + 2;
                v33 += 3;
                if ( v34 > 0x7FFFF )
                {
                  v33 = 0;
                  break;
                }
              }
              previous = (signed int)FIELD_U32(v32 + (1) * 8, 0x0);
              if ( v33 >= previous )
                v33 = previous - 1;
              qmemcpy(v53, v52, v33);
              *((_BYTE *)&FIELD_U32(v53, 0x0) + v33) = 0;
            }
            v36 = v31 + v27;
            v37 = FIELD_U32(v32 + (3) * 8, 0x0);
            ((void (__fastcall *)(int (***)()))v60[3])(&v60);
            v38 = v61;
            v12 = v56;
            if ( v37 != v61 )
            {
              v54 = v36;
              ((void (__fastcall *)(int (***)()))v60[3])(&v60);
              v39 = 0;
              while ( *((_BYTE *)&FIELD_U32(v61, 0x0) + v39) )
              {
                if ( !*((_BYTE *)&FIELD_U32(v61, 0x0) + v39 + 1) )
                {
                  ++v39;
                  break;
                }
                if ( !*((_BYTE *)&FIELD_U32(v61, 0x0) + v39 + 2) )
                {
                  v39 += 2;
                  break;
                }
                v40 = v39 + 2;
                v39 += 3;
                if ( v40 > 0x7FFFF )
                {
                  v39 = 0;
                  break;
                }
              }
              v41 = (signed int)FIELD_U32(v55 + (3) * 8, 0x4);
              if ( v39 >= v41 )
                v39 = v41 - 1;
              qmemcpy(v37, v38, v39);
              *((_BYTE *)&FIELD_U32(v37, 0x0) + v39) = 0;
              v36 = v54;
            }
            v10 = v36 + 9;
            goto LABEL_111;
          }
LABEL_114:
          if ( !sub_6090552C(a2, (int)&v68, 1) )
            return -1;
          continue;
        }
        v13 = v12;
        v14 = v9;
        for ( j = 0; aOctype[j]; j += 2 )
        {
          if ( j > 0x7FFFF )
            goto LABEL_13;
          if ( !aOctype[j + 1] )
          {
            ++j;
            break;
          }
        }
        if ( j < 1 )
        {
LABEL_13:
          v18 = 0;
          v9 = v14;
          v12 = v13;
          LOBYTE(v60) = 0;
          do
          {
            if ( !sub_6090552C(a2, (int)v9, 1) )
              return -1;
            --v18;
          }
          while ( (unsigned __int8)v60 != 91 );
          if ( !v18 )
            return -1;
          v10 = v42 + 7 - v18;
LABEL_111:
          v11 = 0;
          goto LABEL_114;
        }
        v16 = 0;
        while ( 1 )
        {
          v17 = (unsigned __int8)aOctype[v16];
          if ( sub_60905340(a2) != v17 )
            return -1;
          if ( ++v16 >= j )
            goto LABEL_13;
        }
      case 3:
        v11 = 3;
        if ( v68 == 45 )
          v11 = 4;
        goto LABEL_114;
      case 4:
        v11 = 3;
        if ( v68 != 45 )
          goto LABEL_114;
        if ( !sub_6090552C(a2, (int)&v68, 1) || v68 != 62 )
          return -1;
        v10 = v42 + 2;
        goto LABEL_111;
    }
  }
}
