int binarySearch(int arr[],int key, int s, int e){
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(key>arr[mid]){
            ans = mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int getPivot(int arr[], int size){
    int s=0,e=size-1;
    int mid= s+(e-1)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s=mid+1;
        }else
        {
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int search(int* nums, int numsSize, int target){
    int pivot=getPivot(nums,numsSize);
    if(target > nums[pivot]){
        return binarySearch(nums,target,0,pivot-1);
    }else{
        return binarySearch(nums,target,pivot ,0);
    }
}