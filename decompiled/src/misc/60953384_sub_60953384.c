/* sub_60953384
 * address: 0x60953384   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60953384(int result, sead_ListNode **a2, int a3, sead_ListNode *a4, signed int a5, int a6)
{
  sead_ListNode *v8; // r9
  unsigned int v9; // r0
  sead_ListNode *v10; // r0
  sead_ListNode *v11; // r7
  sead_ListNode *v12; // r4
  sead_ListNode *v13; // r5
  sead_ListNode *previous; // r5
  sead_ListNode *next; // r6
  int *v16; // r0
  sead_ListNode **v17; // r5
  sead_ListNode *v18; // r1
  sead_ListNode *v19; // r2
  sead_ListNode *v20; // r1
  sead_ListNode *v21; // r2

  v8 = (sead_ListNode *)result;
  if ( a4 )
  {
    FIELD_U32(result, 84) = a3;
    if ( a5 >= 1 )
    {
      v9 = (a5 << 6) + 8;
      if ( v9 < a5 << 6 )
        v9 = -1;
      if ( !is_mul_ok(0x40u, a5) )
        v9 = -1;
      v10 = (sead_ListNode *)sub_608DE334(v9, a6, 4);
      v11 = v10;
      if ( v10 )
      {
        v12 = v10 + 1;
        FIELD_U32(v10, 0x0) = (sead_ListNode *)64;
        FIELD_U32(v10, 0x4) = (sead_ListNode *)a5;
        v13 = v10 + 1;
        if ( (((a5 << 6) - 64) & 0x40) == 0 )
        {
          FIELD_U32(v10 + (1) * 8, 0x0) = 0;
          FIELD_U32(v10 + (1) * 8, 0x4) = 0;
          FIELD_U32(v10 + (2) * 8, 0x0) = 0;
          memset(&v10[3], 0, 44);
          v13 = v11 + 9;
        }
        if ( (unsigned int)((a5 << 6) - 64) >> 6 )
        {
          do
          {
            FIELD_U32(v13, 0x0) = 0;
            FIELD_U32(v13, 0x4) = 0;
            FIELD_U32(v13 + (1) * 8, 0x0) = 0;
            memset(&v13[2], 0, 44);
            FIELD_U32(v13 + (8) * 8, 0x0) = 0;
            FIELD_U32(v13 + (8) * 8, 0x4) = 0;
            FIELD_U32(v13 + (9) * 8, 0x0) = 0;
            memset(&v13[10], 0, 44);
            v13 += 16;
          }
          while ( v13 != &v12[8 * a5] );
        }
        FIELD_U32(v8 + (3) * 8, 0x0) = (sead_ListNode *)a5;
        FIELD_U32(v8 + (3) * 8, 0x4) = v12;
      }
    }
    previous = FIELD_U32(v8 + (3) * 8, 0x0);
    if ( previous )
    {
      next = FIELD_U32(v8 + (3) * 8, 0x4);
      do
      {
        FIELD_U32(next + (1) * 8, 0x4) = 0;
        FIELD_U32(next + (7) * 8, 0x4) = 0;
        sead__ListNode__insertFront(v8 + 8, (sead_ListNode *)((char *)FIELD_U32(v8 + (9) * 8, 0x4) + (unsigned int)next));
        previous = (sead_ListNode *)((char *)previous - 1);
        next += 8;
        ++FIELD_U32(v8 + (9) * 8, 0x0);
      }
      while ( previous );
    }
    v16 = sub_608DE574((int **)&v8[8]);
    if ( v16 )
      v17 = (sead_ListNode **)((char *)v16 - (char *)FIELD_U32(v8 + (9) * 8, 0x4));
    else
      v17 = 0;
    v18 = a2[1];
    v19 = a2[2];
    *v17 = *a2;
    v17[1] = v18;
    v17[2] = v19;
    v17[3] = a4;
    sead__ListNode__insertFront(v8 + 6, (sead_ListNode *)((char *)FIELD_U32(v8 + (7) * 8, 0x4) + (unsigned int)v17));
    ++FIELD_U32(v8 + (7) * 8, 0x0);
    v20 = v17[1];
    v21 = v17[2];
    FIELD_U32(v8, 0x4) = *v17;
    FIELD_U32(v8 + (1) * 8, 0x0) = v20;
    FIELD_U32(v8 + (1) * 8, 0x4) = v21;
    result = (int)v17[1] + (_DWORD)v17[3];
    FIELD_U32(v8 + (2) * 8, 0x0) = (sead_ListNode *)result;
  }
  return result;
}
