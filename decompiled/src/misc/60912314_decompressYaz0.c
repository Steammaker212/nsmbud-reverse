/* decompressYaz0
 * address: 0x60912314   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall decompressYaz0(char *outData, const char *inData)
{
  int group_head_; // r6
  unsigned int decompSize; // r4
  unsigned int decompSize_; // r2
  const char *src; // r1
  unsigned int group_head_len; // r5
  int group_head; // t1
  unsigned __int8 *b2_ptr; // r1
  int b1_; // r3
  int b1; // t1
  int b2_; // t1
  unsigned int v12; // r3
  bool len; // zf
  unsigned int n_; // r7
  int v15; // r3
  unsigned int n; // r7
  int additionalLen; // t1
  char singleDecompByte; // t1

  decompSize = bswap32(*((_DWORD *)inData + 1));
  decompSize_ = decompSize;
  src = inData + 0x10;
  group_head_len = 0;
  do
  {
    while ( 1 )
    {
      group_head_len >>= 1;
      if ( !group_head_len )
      {
        group_head = *(unsigned __int8 *)src++;
        group_head_ = group_head;
        group_head_len = 0x80;
      }
      if ( (group_head_ & group_head_len) == 0 )
        break;
      singleDecompByte = *src++;
      --decompSize;
      *outData++ = singleDecompByte;
      if ( !decompSize )
        return decompSize_;
    }
    b1 = *(unsigned __int8 *)src;
    b2_ptr = (unsigned __int8 *)(src + 1);
    b1_ = b1;
    b2_ = *b2_ptr;
    src = (const char *)(b2_ptr + 1);
    v12 = b2_ + (b1_ << 8);
    n_ = v12 >> 12;
    len = v12 >> 12 == 0;
    v15 = (v12 & 0xFFF) + 1;
    n = n_ + 2;
    if ( len )
    {
      additionalLen = *(unsigned __int8 *)src++;
      n = additionalLen + 0x12;
    }
    decompSize -= n;
    do
    {
      --n;
      *outData = outData[-v15];
      ++outData;
    }
    while ( n );
  }
  while ( decompSize );
  return decompSize_;
}
